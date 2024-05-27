#include <unistd.h>

void	ft_string(char *str)
{
	while (*str != '\0')
		write (1, str++, 1);
}

void	ft_char(char c)
{
	write (1, &c, 1);
}

void	num(int n)
{
	if (n < 0)
	{
		ft_char ('-');
		n = - n;
	}
	if (n >= 10)
		num (n / 10);
	ft_char (n % 10 + '0');
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned	i;

	i = 0;
	while ((src[i] != '\0') && (i < size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}

int	main(void)
{
	char	str[32];

	char org[] = "Hello, Welcome";
	ft_strlcpy (str, org, 32);
	ft_string (str);
	ft_char (' ');
	num (ft_strlcpy (str, org, 32));
	return (0);
}
