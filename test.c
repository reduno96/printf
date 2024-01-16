#include "ft_printf.h"
#include <stdio.h>

int main ()
{
    int fs = ft_printf("a%cbcd%s|\n", 'e', "redo");
    int fd = printf   ("a%cbcd%s|\n", 'e', "redo");
    printf("%d\n",fs);
    printf("%d\n",fd);
}