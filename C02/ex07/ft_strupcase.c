#include <unistd.h>

void	ft_string(char *c)
{
	while (*c != '\0')
		write (1, c++, 1);
}
/*
 	man ascii : a - A = 97 - 65 = 32
*/

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char a[] = "abcdefg";
	ft_string (ft_strupcase (a));
	return (0);
}
