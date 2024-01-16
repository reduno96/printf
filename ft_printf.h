# ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

# define HEX_UPP "0123456789ABCDEF"
# define HEX_LOW "0123456789abcdef"


int	ft_printf(const char *str, ...);

int ft_put_char(int c);
int ft_put_str(char *str);
int ft_put_adr(void *adr);
int ft_put_hexa(unsigned long long hexa);

#endif
