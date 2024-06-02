#include <unistd.h>

char	string(char *str)
{
	while (*str)
		(write (1, str++, 1));
}

char	*strstr(char *haystack, char *needle)
{
	char	*h;
	char	*n;

	if (!(*needle))
		return (haystack);
	while (*haystack)
	{
		h = haystack;
		n = needle;
		while ((*n) && (*h == *n))
		{
			h++;
			n++;
		}
		if (!(*n))
			return (haystack);
		haystack++;
	}
	return (0);
}

int	main(void)
{
	char	*result;

	char	s1[] = "Banana banana";
	char	s2[] = "banana";
	result = strstr (s1, s2);
	(result) ? string ("Found") : string ("Notfound");
	return (0);
}
