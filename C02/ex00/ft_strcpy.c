#include <unistd.h>

void	ft_string(char *str)
{
	while (*str != '\0')
		write (1, str++, 1);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	copy[32];

	char str[] = "Hello world copy";
	ft_strcpy (copy,str);
	ft_string (copy);
	return (0);
}
