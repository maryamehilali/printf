#include <limits.h>
#include <stdio.h>
#include "../main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    printf("test for lenght printf %d , _printf %d\n", len2, len);
   _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    return (0);
}
