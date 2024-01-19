#include "ft_printf.h"

int	ft_put_hexa(unsigned long hexa, int is_upper)
{
	int count;

	count = 0;
	if (hexa >= 16)
	{
		count += ft_put_hexa(hexa / 16, is_upper);
		count += ft_put_hexa(hexa % 16, is_upper);
	}
	else if (hexa < 10)
		count += ft_put_char(hexa + '0');
	else
	{
		if (is_upper)
			count += ft_put_char(hexa - 10 + 'A');
		else
			count += ft_put_char(hexa - 10 + 'a');
	}
	return (count);
}