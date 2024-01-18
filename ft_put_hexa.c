#include "ft_printf.h"

int ft_put_hexa(unsigned long long hexa)
{
    int count;

    count = 0;
    if (hexa >= 16)
    {
        count += ft_put_hexa(hexa / 16);
        count += ft_put_hexa(hexa % 16);
    }
    else
    {
        if (hexa < 10)
            count += ft_put_char(hexa + '0');
        else
            count += ft_put_char(hexa - 10 + 'a');
    }
    return count;
}