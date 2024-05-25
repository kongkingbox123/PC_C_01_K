#include <unistd.h>

void	ft_char(char c)
{
	write(1, &c, 1);
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
	ft_char ((char) (n % 10 + '0'));
}

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int	i;

	ft_ft (&i);
	print_num(i);
	return (0);
}
