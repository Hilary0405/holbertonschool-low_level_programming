#include "function_pointers.h"
#include <stddef.h>

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size && action)
	{
		size_t i = 0;

		for (; i < size; i++)
			action(array[i]);
	}
}
