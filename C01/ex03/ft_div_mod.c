#include <unistd.h>

void	ft_char(char c)
{
	write (1, &c, 1);
}

void	print_num(int n)
{
	if (n < 0)
	{
		ft_char ('-');
		n = -n;
	}
	if (n >= 10)
		print_num (n / 10);
	ft_char (n % 10 + '0');
}

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 10;
	b = 2;
	ft_div_mod (a, b, &div, &mod);
	print_num (div);
	ft_char (' ');
	print_num (mod);
	return (0);
}
