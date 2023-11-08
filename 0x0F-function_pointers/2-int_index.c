#include "function_pointers.h"

/**
*int_index - Write a function that searches for an integer
*@array: Arr integer
*@size: the size of array
*@cmp: compare fun
*
*Return: int index
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int index = 0;

if (array == NULL || cmp == NULL)
return (-1);

for (; index < size; index++)
{
if (cmp(array[index]) != 0)
return (index);
}

return (-1);

}
