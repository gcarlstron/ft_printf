#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	char			c = 'c';
	char			*s = "teste";
	void			*p = &s;
	int				d = -2147483648;
	int 			i = 2147483647;
	unsigned int	u = 4294967295;
	int 			x = i;

	printf("____________ORIGINAL____________\n");
	printf("retorn: %i\n", printf ("teste : %c\n", c));
	printf("retorn: %i\n", printf ("teste : %s\n", s));
	printf("retorn: %i\n", printf ("teste : %p\n", p));
	printf("retorn: %i\n", printf ("teste : %d\n", d));
	printf("retorn: %i\n", printf ("teste : %i\n", i));
	printf("retorn: %i\n", printf ("teste : %u\n", u));
	printf("retorn: %i\n", printf ("teste : %x\n", x));
	printf("retorn: %i\n", printf ("teste : %X\n", x));
	printf("retorn: %i\n", printf ("teste : %%\n"));
	ft_printf("____________FTPRINTF____________\n");
	ft_printf("retorn: %i\n", ft_printf ("teste : %c\n", c));
	ft_printf("retorn: %i\n", ft_printf ("teste : %s\n", s));
	ft_printf("retorn: %i\n", ft_printf ("teste : %p\n", p));
	ft_printf("retorn: %i\n", ft_printf ("teste : %d\n", d));
	ft_printf("retorn: %i\n", ft_printf ("teste : %i\n", i));
	ft_printf("retorn: %i\n", ft_printf ("teste : %u\n", u));
	ft_printf("retorn: %i\n", ft_printf ("teste : %x\n", x));
	ft_printf("retorn: %i\n", ft_printf ("teste : %X\n", x));
	ft_printf("retorn: %i\n", ft_printf ("teste : %%\n"));

}