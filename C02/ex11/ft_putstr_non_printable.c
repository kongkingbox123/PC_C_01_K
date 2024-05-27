#include <unistd.h>

void	ft_char(char c)
{
	write (1, &c, 1);
}
/*
 	shift right bitwish operators >>
 	\n = 0A = 1010 >> 4 = 0000 | 1010 cut 1010 = 0000 & 0x0F = 0000 & 1111 = 0000 = 0
	\n = 0A = 1010 : 0A & 0x0F = 1010 & 1111 = 1010 = 0A
	result : \0a
*/ 
void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if ((*str >= 32) && (*str <= 126))
			ft_char (*str);
		else
		{
			ft_char ('\\');
			ft_char ("0123456789abcdef" [(*str >> 4) & 0x0F]);
			ft_char ("0123456789abcdef" [(*str & 0x0F)]);
		}
		str++;
	}
}

int	main(void)
{
	char  example[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable (example);
	return (0);
}
