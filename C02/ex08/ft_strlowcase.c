#include <unistd.h>

void	ft_string(char *str)
{
	while (*str != '\0')
		write (1, str++, 1);
}
/*
 	man ascii : A + 32 : 65 + 32 = 97 = 'a' 
*/
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int	main(void)
{
	char ch[] = "ABCDEFG";
	ft_string (ft_strlowcase (ch));
	return (0);
}
