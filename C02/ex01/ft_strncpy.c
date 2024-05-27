#include <unistd.h>

void	ft_string(char *str)
{
	while (*str != '\0')
		write (1, str++, 1);
}

/*
	dest :  a pointer to the destination buffer where the string will be copied.
	src  :	a pointer to the source string to be copied.
	n    :	the maximum number of characters to copy.

	process :
	((src[i] != '\0') && (i < n)) : Copy characters from *src to dest until n characters are copied 
	                                or end of *src is reached.
	while (i < n)                 : Pad the remaining part of dest with null characters if there is space left
					>>> I am 42!\0\0\0\0\0\0\0...
*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned	i;

	i = 0;
	while ((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}

int	main(void)
{
	char	copy[32];

	char str[] = "I am 42!";
	ft_strncpy (copy, str, 32);
	ft_string (copy);
	return (0);
}
