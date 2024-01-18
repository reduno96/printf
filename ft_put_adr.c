#include "ft_printf.h"

int	ft_put_adr(void *adr)
{
	int	count;

	count = 0;
	if (adr == NULL)
		return (count += ft_put_str("0x0"));
	count += ft_put_str("0x");
	count += ft_put_hexa((unsigned long long)adr, 0);
	return (count);
}
