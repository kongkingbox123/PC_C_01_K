#include <unistd.h>

void	ft_char(char c)
{
	write (1, &c, 1);
}

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	print_loop(int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_char (arr[i] + '0');
		i++;
	}
}

/*
 	Selection Sort
	How it works: Iterates over an array to find the least valuable data with each passing round. 
	Then swap the position of that data with the data in the first position of the unordered section.
*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = i;
		while (j < size)
		{
			if (tab[i] > tab[j])
				swap (&tab[i], &tab[j]);
			j++;
		}
		i++;
	}
}

/*
 	arr [ 5 , 1 , 0 , 9 , 2 ]
	if (tab[i] > tab[j]
	loop i = 0 : tab[0] > tab[1] = 5 > 1 : swap 1 : 5 more 1 : [ 1 ,^5 , 0 , 9 , 2 ]  
		     tab[0] > tab[2] = 1 > 0 : swap 2 : 1 more 0 : [ 0 , 5 , 1 , 9 , 2 ]
		     tab[0] > tab[3] = 0 > 9 : no swap: 0 loss 9 : [ 0 , 5 , 1 , 9 , 2 ]
		     tab[0] > tab[4] = 0 > 2 : np swap: 0 loss 2 : [ 0 , 5 , 1 , 9 , 2 ]
	loop i = 1 : tab[1] > tab[2] = 5 > 1 : swap 1 : 5 more 1 : [ 0 , 1 ,^5 , 9 , 2 ]
	             tab[1] > tab[3] = 1 > 9 : no swap: 1 lose 9 : [ 0 ,^1 , 5 , 9 , 2 ]
		     tab[1] > tab[4] = 1 > 2 : no swap: 1 lose 2 : [ 0 ,^1 , 5 , 9 , 2 ]
	loop i = 2 : tab[2] > tab[3] = 5 > 9 : no swap: 5 lose 9 : [ 0 , 1 ,^5 , 9 , 2 ]
       		     tab[2] > tab[4] = 5 > 2 : swap 1 : 5 more 2 : [ 0 , 1 , 2 , 9 ,^5 ]
	loop i = 3 : tab[3] > tab[4] = 9 > 5 : swap 1 : 9 mire 5 : [ 0 , 1 , 2 , 5 ,^9 ]
	end i more size - 1 = 3 < 5 - 1;
	print      : 01259:	
        	
*/

int	main(void)
{
	int	size;

	int arr[] = {5, 1, 0, 9, 2};
	size = 5;
	ft_sort_int_tab (arr , 5);
	print_loop (arr , 5);
	return (0);
}
