#include "custom_header.h"
#include <elf.h>

void display_osabi_info(Elf64_Ehdr header);

/**
 * Display the ELF magic bytes.
 *
 * @param header: the ELF header struct
 */
void show_magic_bytes(Elf64_Ehdr header)
{
    int i;

    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++)
        printf("%2.2x%s", header.e_ident[i], i == EI_NIDENT - 1 ? "\n" : " ");
}

/**
 * Display the ELF class information.
 *
 * @param header: the ELF header struct
 */
void display_class(Elf64_Ehdr header)
{
    printf("  Class:                             ");
    switch (header.e_ident[EI_CLASS])
    {
        case ELFCLASS64:
            printf("ELF64");
            break;
        case ELFCLASS32:
            printf("ELF32");
            break;
        case ELFCLASSNONE:
            printf("none");
            break;
    }
    printf("\n");
}

/**
 * Display the ELF data information.
 *
 *
 * @param header: the ELF header struct
 */
void display_data(Elf64_Ehdr header)
{
    printf("  Data:                              ");
    switch (header.e_ident[EI_DATA])
    {
        case ELFDATA2MSB:
            printf("2's complement, big endian");
            break;
        case ELFDATA2LSB:
            printf("2's complement, little endian");
            break;
        case ELFDATANONE:
            printf("none");
            break;
    }
    printf("\n");
}

/**
 * Display the ELF version information.
 * @param header: the ELF header struct
 */
void display_version(Elf64_Ehdr header)
{
    printf("  Version:                           %d", header.e_ident[EI_VERSION]);
    switch (header.e_ident[EI_VERSION])
    {
        case EV_CURRENT:
            printf(" (current)");
            break;
        case EV_NONE:
            printf("%s", "");
            break;
    }
    printf("\n");
}

/**
 * Display the ELF OS/ABI information.
 *
 * @param header: the ELF header struct
 */
void display_osabi(Elf64_Ehdr header)
{
    printf("  OS/ABI:                            ");
    switch (header.e_ident[EI_OSABI])
    {
        case ELFOSABI_NONE:
            printf("UNIX - System V");
            break;
        case ELFOSABI_HPUX:
            printf("UNIX - HP-UX");
            break;
        case ELFOSABI_NETBSD:
            printf("UNIX - NetBSD");
            break;
        case ELFOSABI_LINUX:
            printf("UNIX - Linux");
            break;
        case ELFOSABI_SOLARIS:
            printf("UNIX - Solaris");
            break;
        case ELFOSABI_AIX:
            printf("UNIX - AIX");
            break;
        case ELFOSABI_IRIX:
            printf("UNIX - IRIX");
            break;
        case ELFOSABI_FREEBSD:
            printf("UNIX - FreeBSD");
            break;
        case ELFOSABI_TRU64:
            printf("UNIX - TRU64");
            break;
        default:
            display_osabi_info(header);
            break;
    }
    printf("\n");
}

/**
 * Display additional ELF OS/ABI information.
 *
 * @param header: the ELF header struct
 */
void display_osabi_info(Elf64_Ehdr header)
{
    switch (header.e_ident[EI_OSABI])
    {
        case ELFOSABI_MODESTO:
            printf("Novell - Modesto");
            break;
        case ELFOSABI_OPENBSD:
            printf("UNIX - OpenBSD");
            break;
        case ELFOSABI_STANDALONE:
            printf("Standalone App");
            break;
        case ELFOSABI_ARM:
            printf("ARM");
            break;
        default:
            printf("<unknown: %x>", header.e_ident[EI_OSABI]);
            break;
    }
}

/**
 * Display the ELF ABI version.
 * @param header: the ELF header struct
 */
void display_abiversion(Elf64_Ehdr header)
{
    printf("  ABI Version:                       %d\n", header.e_ident[EI_ABIVERSION]);
}

/**
 * Display the ELF type information.
 *
 * @param header: the ELF header struct
 */
void display_type(Elf64_Ehdr header)
{
    char *p = (char *)&header.e_type;
    int i = 0;

    printf("  Type:                              ");
    if (header.e_ident[EI_DATA] == ELFDATA2MSB)
        i = 1;
    switch (p[i])
    {
        case ET_NONE:
            printf("NONE (None)");
            break;
        case ET_REL:
            printf("REL (Relocatable file)");
            break;
        case ET_EXEC:
            printf("EXEC (Executable file)");
            break;
        case ET_DYN:
            printf("DYN (Shared object file)");
            break;
        case ET_CORE:
            printf("CORE (Core file)");
            break;
        default:
            printf("<unknown>: %x", p[i]);
            break;
    }
    printf("\n");
}

/**
 * Display the ELF entry point address.
 *
 *
 * @param header: the ELF header struct
 */
void display_entry(Elf64_Ehdr header)
{
    int i = 0, len = 0;
    unsigned char *p = (unsigned char *)&header.e_entry;

    printf("  Entry point address:               0x");
    if (header.e_ident[EI_DATA] != ELFDATA2MSB)
    {
        i = header.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
        while (!p[i])
            i--;
        printf("%x", p[i--]);
        for (; i >= 0; i--)
            printf("%02x", p[i]);
        printf("\n");
    }
    else
    {
        i = 0;
        len = header.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
        while (!p[i])
            i++;
        printf("%x", p[i++]);
        for (; i <= len; i++)
            printf("%02x", p[i]);
        printf("\n");
    }
}

/**
 * Main program.
 * @param arg_count: argument count
 *
 * @param arg_vector: argument vector
 *
 * Return: 1 on success, 0 on failure
 */
int main(int arg_count, char **arg_vector)
{
    int file_descriptor;
    Elf64_Ehdr header;
    ssize_t bytes_read;

    if (arg_count != 2)
        dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"), exit(98);
    file_descriptor = open(arg_vector[1], O_RDONLY);
    if (file_descriptor == -1)
        dprintf(STDERR_FILENO, "Can't open file: %s\n", arg_vector[1]), exit(98);
    bytes_read = read(file_descriptor, &header, sizeof(header));
    if (bytes_read < 1 || bytes_read != sizeof(header))
        dprintf(STDERR_FILENO, "Can't read from file: %s\n", arg_vector[1]), exit(98);
    if (header.e_ident[0] == 0x7f && header.e_ident[1] == 'E' && header.e_ident[2] == 'L' &&
            header.e_ident[3] == 'F')
    {
        printf("ELF Header:\n");
    }
    else
        dprintf(STDERR_FILENO, "Not ELF file: %s\n", arg_vector[1]), exit(98);

    show_magic_bytes(header);
    display_class(header);
    display_data(header);
    display_version(header);
    display_osabi(header);
    display_abiversion(header);
    display_type(header);
    display_entry(header);

    if (close(file_descriptor))
        dprintf(STDERR_FILENO, "Error closing file descriptor: %d\n", file_descriptor), exit(98);

    return EXIT_SUCCESS;
}
