#include <unistd.h>

void	ft_char(char c)
{
	write (1, &c, 1);
}

void	num(int n)
{
	if (n < 0)
	{
		ft_char ('-');
		n = -n;
	}
	if (n >= 10)
		num (n / 10);
	ft_char (n % 10 + '0');
}

int	is_numeric(char n)
{
	return ((n >= '0') && (n <= '9'));
}

int	ft_str_is_numeric(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (!(is_numeric (*str)))
			return (0);
		str++;
	}
	return (1);
}

int	main(void)
{
	char check_1[] = "54345";
	char check_0[] = "HelpMe";
	num (ft_str_is_numeric (check_1));
	ft_char ('\n');
	num (ft_str_is_numeric (check_0));
	return (0);
}
