#include "ft_printf.h"

int ft_put_str(char *str)
{
    int count;

    count = 0;
    while(*str)
    {
        count += ft_put_char(*str);
        str++;
    }
    return (count);
}