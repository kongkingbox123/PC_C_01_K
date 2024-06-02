#include <unistd.h>

void	*ft_string(char *str)
{
	while (*str != '\0')
		write (1, str++, 1);
}

char	*ft_strcat(char *dest, char *src)
{
	char *ch = dest;
	while (*ch)
		ch++;
	while (*src)
		*ch++ = *src++;
	*ch = '\0';
	return (dest);
}

int	main(void)
{
	char s1[1024] = "JoJo";
	char s2[] = " Soda.";
	ft_strcat (s1, s2);
	ft_string (s1);
	return (0);
}
