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

int	is_uppercase(char c)
{
	return ((c >= 'A') && (c <= 'Z'));
}

int	ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (!(is_uppercase (*str)))
			return (0);
		str++;
	}
	return (1);
}

int	main(void)
{
	char check_1[] = "IRONMAN";
	char check_0[] = "IronmanII";
	char emtry[] = "";
	num (ft_str_is_uppercase (check_1));
	ft_char ('\n');
	num (ft_str_is_uppercase (check_0));
	ft_char ('\n');
	num (ft_str_is_uppercase (emtry));
	return (0);
}
