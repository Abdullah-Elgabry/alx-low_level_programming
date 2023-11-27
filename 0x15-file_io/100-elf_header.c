#include "main.h"
#include <elf.h>

void print_osabi_more_altered(Elf64_Ehdr inputHeader);

/**
 * print_magic_modified - prints ELF magic bytes
 * @inputHeader: the ELF header struct
 */
void print_magic_modified(Elf64_Ehdr inputHeader)
{
	int index;

	printf(" Magic: ");
	for (index = 0; index < EI_NIDENT; index++)
		printf("%2.2x%s", inputHeader.e_ident[index], index == EI_NIDENT - 1 ? "\n" : " ");
}

/**
 * print_class_altered - prints ELF class
 * @inputHeader: the ELF header struct
 */
void print_class_altered(Elf64_Ehdr inputHeader)
{
	printf(" Class:              ");
	switch (inputHeader.e_ident[EI_CLASS])
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
 * print_data_altered - prints ELF data
 * @inputHeader: the ELF header struct
 */
void print_data_altered(Elf64_Ehdr inputHeader)
{
	printf(" Data:               ");
	switch (inputHeader.e_ident[EI_DATA])
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
 * print_version_altered - prints ELF version
 * @inputHeader: the ELF header struct
 */
void print_version_altered(Elf64_Ehdr inputHeader)
{
	printf(" Version:             %d", inputHeader.e_ident[EI_VERSION]);
	switch (inputHeader.e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)");
		break;
		case EV_NONE:
			printf("%s", "");
		break;
		break;
	}
	printf("\n");
}

/**
 * print_osabi_altered - prints ELF osabi
 * @inputHeader: the ELF header struct
 */
void print_osabi_altered(Elf64_Ehdr inputHeader)
{
	printf(" OS/ABI:              ");
	switch (inputHeader.e_ident[EI_OSABI])
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
			print_osabi_more_altered(inputHeader);
			break;
	}
	printf("\n");
}


/**
 * print_osabi_more_altered - prints ELF osabi more
 * @inputHeader: the ELF header struct
 */
void print_osabi_more_altered(Elf64_Ehdr inputHeader)
{
	switch (inputHeader.e_ident[EI_OSABI])
	{
		case ELFOSABI_MODESTO:
			printf("Novell - Modesto");
			break;
		case ELFOS

