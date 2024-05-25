#include <unistd.h>

void	ft_char(char c)
{
	write (1, &c,1);
}

void ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;/* i = index array */
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}

/* 	Just switch half ( i < size / 2 )
 	tab[size - 1 - i] = index at switch tab[5 - 1 - 0] = tab[0] swich tab[4]
	tab[i] = index array tab[0] tab[1] tab[2] tab[3] tab[4]
  	Initial   array	: { 1 2 3 4 5 } 
	Before    swap	: i = 0, tab[0] = 1, tab[4] = 5
	> After   swap	: tab[0] = 5, tab[4] = 1
	Before    swap	: i = 1, tab[1] = 2, tab[3] = 4
	> After   swap	: tab[1] = 4, tab[3] = 2
	Final     array	: 5 4 3 2 1 
	print 		: 54321
*/

int	main(void)
{
	int	i;

	i = 0;
	int arr[5] = {1, 2, 3, 4, 5};
	ft_rev_int_tab(arr , 5);
	while (i < 5)
	{
		ft_char (arr[i] + '0');
		i++;
	}
	return (0);
}
