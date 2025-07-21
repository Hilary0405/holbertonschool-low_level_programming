#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - calls a function to print a name
 * @name: the name to print
 * @f: pointer to a function that prints
 */
void print_name(char *name, void (*f)(char *))
{
    if (name = NULL || f == NULL)
        return;

    f(name);
}
