#include "ft_printf.h"

static int	ft_put_depend(va_list args, char c)
{
	int	count;

	count = 0;
	if (c == 'c')
		return (count = ft_put_char(va_arg(args, int)));
	else if (c == 's')
		return (count = ft_put_str(va_arg(args, char *)));
	else if (c == 'p')
		return (count = ft_put_adr(va_arg(args, void *)));
	else if (c == 'd' || c == 'i' )
		return (count = ft_put_nbr(va_arg(args, int)));
	else if (c == 'u')
		return (count = ft_put_unbr(va_arg(args, int)));
	else if(c == 'x')
	    return (count = ft_put_hexa(va_arg(args, unsigned long long), 0));
	else if(c == 'X')
	    return (count = ft_put_hexa(va_arg(args, unsigned long long), 1));
	else if (c == '%')
		return (count = ft_put_char(c));
	return (count);
}

static int ft_is_flag(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' ||
		c == 'u' || c == 'x' || c == 'X' || c == '%')
		return (1);
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;
	int		i;

	va_start(args, str);
	count = 0;

	i = 0;
	while (str[i])
	{
		if (str[i] == '%' && ft_is_flag(str[i + 1]) == 1)
			count += ft_put_depend(args, str[i + 1]);
		else if (str[i] != '%' )
			count += ft_put_char(str[i]);
		i++;
	}
	va_end(args);
	return (count);
}
