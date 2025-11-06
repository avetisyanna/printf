#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    int len1, len2;

    // ===== Test char =====
    len1 = printf("printf char: %c\n", 'A');
    len2 = ft_printf("ft_printf char: %c\n", 'A');

    printf("Return: printf=%d, ft_printf=%d\n\n", len1, len2);

    // ===== Test string =====
    len1 = printf("printf string: %s\n", "Hello World");
    len2 = ft_printf("ft_printf string: %s\n", "Hello World");

    printf("Return: printf=%d, ft_printf=%d\n\n", len1, len2);

    // ===== Test integer =====
    len1 = printf("printf int: %d %i\n", 42, -42);
    len2 = ft_printf("ft_printf int: %d %i\n", 42, -42);

    printf("Return: printf=%d, ft_printf=%d\n\n", len1, len2);

    // ===== Test unsigned =====
    len1 = printf("printf unsigned: %u\n", 3000000000U);
    len2 = ft_printf("ft_printf unsigned: %u\n", 3000000000U);

    printf("Return: printf=%d, ft_printf=%d\n\n", len1, len2);

    // ===== Test hex =====
    len1 = printf("printf hex: %x %X\n", 255, 255);
    len2 = ft_printf("ft_printf hex: %x %X\n", 255, 255);

    printf("Return: printf=%d, ft_printf=%d\n\n", len1, len2);

    // ===== Test pointer =====
    int a = 42;
    len1 = printf("printf pointer: %p\n", &a);
    len2 = ft_printf("ft_printf pointer: %p\n", &a);

    printf("Return: printf=%d, ft_printf=%d\n\n", len1, len2);

    // ===== Test percent =====
    len1 = printf("printf percent: %%\n");
    len2 = ft_printf("ft_printf percent: %%\n");

    printf("Return: printf=%d, ft_printf=%d\n\n", len1, len2);

    return 0;
}
