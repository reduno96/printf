#include <stdio.h>
#include "ft_printf.h"
#include <limits.h>

int	main(void)
{
	// // Test case 1: Printing a character
	// ft_printf("Test case 1: %cff\n", 'A');

	// // Test case 2: Printing a string
	// ft_printf("Test case 2: %s\n", "Hello, world!");

	// // Test case 3: Printing a pointer address
	// int num = 42;
	// ft_printf("Test case 3: %p\n", &num);

	// // Test case 4: Printing a decimal number
	// ft_printf("Test case 4: %d\n", 12345);

	// // Test case 5: Printing an unsigned decimal number
	// ft_printf("Test case 5: %u\n", 12345);

	// // Test case 6: Printing a hexadecimal number (lowercase)
	// ft_printf("Test case 6: %x\n", 255);

	// // Test case 7: Printing a hexadecimal number (uppercase)
	// ft_printf("Test case 7: %X\n", 255);

	// // Test case 8: Printing a percentage sign
	// ft_printf("Test case 8: %%s\n", "Hello, world!");

    // // Test case 9: Printing a percentage sign
	// ft_printf("Test case %s 9: %r\n", "with string");

	//  // Test case 9: Printing a percentage sign
	// ft_printf("%r ifj;%s %r", "red"); // Test case 9: Printing a percentage sign
	// ft_printf("%");
	ft_printf(" %x ", 9223372036854775807LL);
	// ft_printf(" NULL %s NULL ", NULL);

	return (0);
}
