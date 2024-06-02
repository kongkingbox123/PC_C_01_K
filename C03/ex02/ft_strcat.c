#include <unistd.h>

void	ft_string(char *str)
{
	while (*str != '\0')
		write (1, str++, 1);
}
/*
                          i
	index i : 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 ...
	char s1 : H e l l o

	                          i                    i
	ft_strcat index : 0 1 2 3 4 5  6  7 8 9 10 11 12 13 14 15 16 17 18 19 20
	char s1 s2      : H e l l o , ' ' w o r  l  d \0
	                           j
	index j : 0  1  2 3 4 5 6  7
	char s2 : , ' ' w o r l d \0
*/
char	*ft_strcat(char *dest, char *src)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char s1[1024] = "Hello";
	char s2[] = ", world";
	ft_strcat (s1 ,s2);
	ft_string (s1);
	return (0);
}
