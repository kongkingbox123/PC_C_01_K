#include <unistd.h>

void	ft_string(char *str)
{
	while (*str != '\0')
		write (1, str++, 1);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while ((j < nb) && (src[j] != '\0'))
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char s1[] = "Hello";
	char s2[] = " wolrd";
	ft_strncat (s1, s2, 5);
	ft_string (s1);
	return (0);
}
