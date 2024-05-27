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
/*
 	man ascii : 32 to 126
*/
int	is_printable(char c)
{
	return ((c >= 32) && (c <= 126));
}

int	ft_str_is_printable(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (!(is_printable (*str)))
			return 0;
		str++;
	}
	return (1);
}

int	main(void)
{
	char check_1[] = "Aa1#!%8*&";
	char check_0[] = "Help\n\fgo12";
	char check_emtry[] = "";
	num (ft_str_is_printable (check_1));
	ft_char('\n');
	num (ft_str_is_printable (check_0));
	ft_char('\n');
	num (ft_str_is_printable (check_emtry));
	return (0);
}
