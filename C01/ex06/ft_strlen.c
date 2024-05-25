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

int	ft_strlen(char *str)
{
	int	counts;
	int	length_char;

	counts = 0;
	length_char = 0;
	while (str[length_char] != '\0')
	{
		if (str[length_char] != ' ')
		{
			counts++;
		}
		length_char++;
	}
	return (counts);
}

int	main(void)
{	
	char string[] = "Hello world";
	int lenght = ft_strlen(string);
	num(lenght);
	return (0);
}

