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

int	is_alpha(char str)
{
	return ((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z'));
}

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
		return (1);	
	while (*str != '\0')
	{
		if (!(is_alpha(*str)))
			return (0);
		str++;
	}
	return (1);
}

int	main(void)
{
	char check_1[] = "JustDoTt";
	char check_0[] = "!~7895/:*";
	num (ft_str_is_alpha (check_1));
	ft_char ('\n');
	num (ft_str_is_alpha (check_0));
	return (0);
}
