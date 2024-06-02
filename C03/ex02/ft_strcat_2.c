#include <unistd.h>

void	ft_string(char *str)
{
	while (*str != '\0')
		write (1, str++, 1);
}

char	*ft_strcat(char *dest, char *src)
{
	while (*dest != '\0')
		dest++;
	while (*src != '\0')
		*dest++ = *src++;
	*dest = '\0';
	return (dest);
}

int	main(void)
{
	char s1[1024] = "I am ";
	char s2[] = "42! .";
	ft_strcat (s1 ,s2);
	ft_string (s1);
	return (0);
}
