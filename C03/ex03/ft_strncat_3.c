#include <unistd.h>

void	string(char *str)
{
	while (*str != '\0')
		write (1, str++, 1);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	size_t	i;
	char	*ch;

	i = 0;
	ch = dest;
	while (*ch)
		ch++;
	while ((i < nb) && (*src))
	{
		*ch++ = *src++;
		i++;
	}
	*ch = '\0';
	return (dest);

}

int	main(void)
{
	char s1[32] = "Hero ";
	char s2[] = "One two call";
	ft_strncat (s1, s2, 3);
	string (s1);
	return (0);
}
