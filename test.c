#include "ft_printf.h"
#include <stdio.h>

int main ()
{
    int fd = ft_printf("%d", 11000);

    printf("%d\n",fd);
}