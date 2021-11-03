#include <stdlib.h>
#include <limits.h>

/**
 * En caso de error, malloc devuelve NULL. Al igual que con cualquier otra función de la biblioteca C, siempre debe verificar el valor de retorno de malloc antes de usarlo. Si no lo hace, se encontrará con segfaults.
 * 
 * main - introduction to malloc and free
 *
 * Return: 0.
 */
int main(void)
{
    char *s;

    while (1)
    {
        s = malloc(INT_MAX);
        s[0] = 'H';
    }
    return (0);
}