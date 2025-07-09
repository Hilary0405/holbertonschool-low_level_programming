#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *a;

    a = _calloc(98, sizeof(char));
    if (a == NULL)
    {
        printf("Calloc failed\n");
        return (1);
    }
    strcpy(a, "Holberton");
    printf("%s\n", a);
    free(a);
 
    return (0);
}
