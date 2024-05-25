#include <unistd.h>

void	ft_char(char c)
{
	write (1, &c, 1);
}

void	number(int n)
{
	if (n < 0)
	{
		ft_char ('-');
		n = -n;
	}
	if (n >= 10)
		number (n / 10);
	ft_char (n % 10 + '0');
}

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = *a % *b;
}

int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 2;
	ft_ultimate_div_mod(&a, &b);
	number (a);
	ft_char (' ');
	number (b);
	return (0);
}
