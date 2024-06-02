#include <unistd.h>

void	ft_char(char c)
{
	write (1, &c, 1);
}

void	ft_string (char *str)
{
	while (*str)
		write (1, str++, 1);
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

int	ft_strlen(char *counts)
{
	if (!(*counts))
		return (0);
	else
		return (1 + ft_strlen (counts + 1));
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;
	size_t	total_len;

	i = 0;
	dest_len = ft_strlen (dest);
	src_len = ft_strlen (src);
	total_len = dest_len + src_len;
	if (size <= dest_len)
		return (src_len + size);
	while ((src[i]) && ((dest_len + 1) < (size - 1)))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (total_len);
}

int	main(void)
{
	char s1[1024] = "Hello";
	char s2[] = ", world";

	ft_strlcat (s1, s2, 1024);
	ft_string (s1);
	return (0);
}
