#include "function_pointers.h"

/**
*array_iterator - unction that executes a function given as a parameter
*
*@array: integer array
*
*@size: the size of arr
*
*@action: function ptr
*
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{

	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}

}
