#include <unistd.h>

char	*ft_str(char *str)
{
	while (*str != '\0')
		write (1, str++, 1);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	size_t	i;

	i = 0;
	while (*dest != '\0')
		dest++;
	while ((i < nb) && (*src != '\0'))
	{
		*dest++ = *src++;
		i++;
	}
	*dest = '\0';
	return (dest);
}

int	main(void)
{
	char s1[32] = "I am ";
	char s2[] = "42!!! .";
	ft_strncat (s1, s2, 3);
	ft_str (s1);
	return (0);
}
