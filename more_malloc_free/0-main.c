#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - test la fonction malloc_checked
 *
 * Return: Always 0.
 */
int main(void)
{
    char *c;
    int *i;
    float *f;
    double *d;

    c = malloc_checked(sizeof(char));
    printf("%p\n", (void *)c);
    i = malloc_checked(sizeof(int));
    printf("%p\n", (void *)i);
    f = malloc_checked(sizeof(float));
    printf("%p\n", (void *)f);
    d = malloc_checked(sizeof(double));
    printf("%p\n", (void *)d);
    return (0);
}
