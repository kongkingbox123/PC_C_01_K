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

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 25;
	ft_swap (&a, &b);
	print_num (a);
	ft_char (' ');
	print_num (b);
	return (0);
}
