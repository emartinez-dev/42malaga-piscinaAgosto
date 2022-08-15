/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmart <franmart@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 10:07:22 by franmart          #+#    #+#             */
/*   Updated: 2022/08/15 12:41:37 by franmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_check_sort(int *tab, int size){
	while (size > 1)
	{
		if (*tab > *(tab+1))
			return (0);
		size--;
		tab++;
	}
	return (1);
}

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int *smallest;
	int i;

	i = 1;
	while(ft_check_sort(tab, size) == 0)
	{
		while (i <= size)
		{
			smallest = tab + 1;
			while (*tab >= *smallest)
			{
				if (*smallest <= *tab)
					ft_swap(tab, smallest);
				else
					tab++;
			}
		}
		i++;
	}
}


int	main(void)
{
	int c[12];
	int *c1;
	int loop;

	c[0] = 1;
	c[1] = 2;
	c[2] = 3;
	c[3] = 5;
	c[4] = 4;
	c[5] = 6;
	c[6] = 7;
	c[7] = 8;
	c[8] = 9;
	c[9] = 10;
	c[10] = 11;
	c[11] = 12;
	c1 = &c[0];
	for (loop = 0; loop < 12; loop++)
		printf("%d ", c[loop]);
	ft_sort_int_tab(c1, 12);
	printf("\n");
	for (loop = 0; loop < 12; loop++)
		printf("%d ", c[loop]);
	return (0);
}
