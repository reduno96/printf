#include "ft_printf.h"

int ft_put_str(char *str)
{
    int count;

    count = 0;
    if (str == NULL)
    {
        count += ft_put_str("(null)");
        return (count);
    }
    while(*str)
    {
        count += ft_put_char(*str);
        str++;
    }
    return (count);
}