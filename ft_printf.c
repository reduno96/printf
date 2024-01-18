#include "ft_printf.h"

static int ft_put_depend(va_list args, char c)
{
    int count;

    count = 0;
    if(c == 'c')
        return (count = ft_put_char(va_arg(args, int)));
    else if (c == 's')
        return (count = ft_put_str(va_arg(args, char *)));
    else if(c == 'p')
        return (count = ft_put_adr(va_arg(args, void *)));
    else if(c == 'd' || c == 'i')
        return (count = ft_put_nbr(va_arg(args, int)));
    else if(c == 'u')
        return (count = ft_put_unbr(va_arg(args, int)));
    // else if(c == 'c')
    //     return (count = ft_putchar(va_arg(args, int)));
    // else if(c == 'c')
    //     return (count = ft_putchar(va_arg(args, int)));
    else
        return (count = ft_put_char(c));
    return (count);
}

int	ft_printf(const char *str, ...)
{
    va_list args;
    va_start(args, str);
    int count;

    count = 0;
    while(*str)
    {
        if (*str == '%')
            count += ft_put_depend(args, *(++str));
        else
            count += ft_put_char(*str);
        str++;
    }
    va_end(args);
    return count;
}
