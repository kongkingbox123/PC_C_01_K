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

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int	value;

	int *n1 = &value;
	int **n2 = &n1;
	int ***n3 = &n2;
	int ****n4 = &n3;
	int *****n5 = &n4;
	int ******n6 = &n5;
	int *******n7 = &n6;
	int ********n8 = &n7;
	int *********n9 = &n8;

	ft_ultimate_ft (n9);
	print_num (*********n9);
	print_num (value);
	ft_char ('\n');
	return (0);
}
