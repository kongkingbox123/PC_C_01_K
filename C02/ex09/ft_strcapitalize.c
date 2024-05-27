#include <unistd.h>

void	ft_string(char *str)
{
	while (*str != '\0')
		write (1, str++, 1);
}

int	is_alphanumeric(char ch)
{
	return (((ch >= 'a') && (ch <= 'z')) || ((ch >= 'A') && (ch <= 'Z')) || ((ch >= '0') && (ch <= '9')));
}
/*
 	"salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un"
	ch_world = 1 : 1 -> - 32
	ch_world = 0 : 0 -> + 32
	loop i = 0 : ch_world = 1 : 's' - 32 = 'S' reset ch_world = 0
	loop i = 1 : ch_world = 0 : 'a' + 32 = 'a' reset ch_world = 0 
	...
	loop i = 6 : ch_world = 0 : ' ' + 32 = ' ' reset ch_world = 1
	loop i = 7 : ch_world = 1 : 'c' - 32 = 'C' reset ch_world = 0
	...
*/
char	*ft_strcapitalize(char *str)
{
	int	i;
	int	ch_word;

	i = 0;
	ch_word = 1;
	while (str[i] != '\0')
	{
		if (is_alphanumeric (str[i]))
		{
			if ((ch_word) && ((str[i] >= 'a') && (str[i] <= 'z')))
				str[i] = str[i] - 32;
			else if (!(ch_word) && ((str[i] >= 'A') && (str[i] <= 'Z')))
				str[i] = str[i] + 32;
			ch_word = 0;
		}
		else
			ch_word = 1;
		i++;
	}
	return (str);
}

int	main(void)
{
	char example[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_string (ft_strcapitalize (example));
	return (0);
}
