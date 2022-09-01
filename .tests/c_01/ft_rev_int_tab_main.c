/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmart <franmart@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 08:10:09 by franmart          #+#    #+#             */
/*   Updated: 2022/08/15 09:18:58 by franmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int x;
	int temp;
	
	x = size - 1;
	while (x > 2)
	{
		temp = *tab;
		*tab =  *(tab + x);
		*(tab + x) = temp;
		x -= 2;
		tab++;
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
	c[3] = 4;
	c[4] = 5;
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
	ft_rev_int_tab(c1, 12);
	printf("\n");
	for (loop = 0; loop < 12; loop++)
		printf("%d ", c[loop]);
	return (0);
}
