#include <unistd.h>

void	ft_string(char *str)
{
	while (*str != '\0')
		write (1, str++, 1);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while ((i < n - 1) && (s1[i] == s2[i]) && (s1[i]))
		i++;
	return (s1[i] - s2[i]);
}

int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "Hello";
	s2 = "Hello, wolrd!";
	if ((ft_strncmp (s1, s2, 5) == 0))
		ft_string ("The string are char 5 equal");
	else
		ft_string ("The string are not char 5 equal");
	return (0);
}
