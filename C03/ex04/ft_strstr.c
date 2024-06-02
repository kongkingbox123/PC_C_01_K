#include <unistd.h>

void	ft_string(char *str)
{
	while (*str != '\0')
		write (1, str++, 1);
}
/*
	*str 	 : The main character string to search for.
	*to_find : The main Substring character string to search *str for.
	*s and *f: temp pointer to *str and *to_find.
	*s == *f : Check whether the letters in the *str and *to_find at the current position match.
	if found : return str = 1
       	not found: return null = 0	


*/
char	*ft_strstr(char *str, char *to_find)
{
	char	*s;
	char	*f;

	if(*str == '\0')
		return (str);
	while (*str != '\0')
	{
		s = str;
		f = to_find;
		while ((*f != '\0') && (*s == *f))
		
			s++;
			f++;
		}
		if (*f == '\0')
			return (str);
		str++;
	}
	return (0);
}

int	main(void)
{
	char	*result;

	char haystack[] = "Hello, world";
	char needle[] = "world";
	result = ft_strstr (haystack, needle);
	if (result)
	{
		ft_string ("Found ");
		ft_string (result);
	}
	else
		ft_string ("Not found\n");
}
