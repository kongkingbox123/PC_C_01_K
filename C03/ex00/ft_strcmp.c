#include <unistd.h>

void	ft_string(char *str)
{
	while (*str != '\0')
		write (1, str++, 1);
}
/*
	while loop : Use the while loop to compare letters in each position of the string.
	return 	   : Restore the difference of mismatched letters.
		   : return *s1 more *s2  return (pos.) +
		   : return *s1 loss *s2  return (neg.) -
		   : return *s1 equal *s2 return (zero.) 0
*/
int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 == *s2) && (*s1))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main(void)
{
	char	*str;
	char	*str1;
	int	result;

	str = "Hello";
	str1 = "hello, world";
	if ((ft_strcmp (str, str1)) == 0)
		ft_string ("The string are equal");
	else
		ft_string ("The string are not equal");
	/*result = ft_strcmp (str, str1);
	if (result == 0)
		ft_string ("The string are equal.\n");
	else
		ft_string ("The string are not equal.");*/
	return (0);
}
