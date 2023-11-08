#include "function_pointers.h"

/**
* print_name - fun will print the name
*
*@name: the name will be printed
*
*@f: print fun ptr
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
