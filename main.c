#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    int ret_ft;
    int ret_orig;
    
    char *null_str = NULL;
    int min_int = -2147483648;
    int x = 255;

    printf("--- String Test ---\n");
    ret_ft = ft_printf("Mine: %s\n", null_str);
    ret_orig = printf("Orig: %s\n", null_str);
    printf("[Return] Mine: %d | Orig: %d\n\n", ret_ft, ret_orig);

    printf("--- Numbers Test ---\n");
    ret_ft = ft_printf("Mine: %d, %i\n", min_int, 42);
    ret_orig = printf("Orig: %d, %i\n", min_int, 42);
    printf("[Return] Mine: %d | Orig: %d\n\n", ret_ft, ret_orig);

    printf("--- Hex & Pointers Test ---\n");
    ret_ft = ft_printf("Mine: %x, %X, %p\n", x, x, &x);
    ret_orig = printf("Orig: %x, %X, %p\n", x, x, &x);
    printf("[Return] Mine: %d | Orig: %d\n\n", ret_ft, ret_orig);

    return (0);
}
