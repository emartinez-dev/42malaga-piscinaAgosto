/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmart <franmart@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 12:04:22 by franmart          #+#    #+#             */
/*   Updated: 2022/08/13 13:07:26 by franmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y){
	int original_y;
	int original_x;
	int c;
	
	original_y = y;
	original_x = x;
	if (x > 0 & y > 0)
	{
		while (x > 0){
			y = original_y;
			while (y > 0) {
				if (x == original_x) // si estamos en la primera fila
				{
					if (y == original_y) // primera columna
						c = 65;
					if (y == 1) // última columna
						c = 67;
					if ( y != original_y & y != 1)
						c = 66;
				}
				if (x == 1) {
					if (y == original_y) // primera columna
						c = 67;
					if (y == 1) // última columna
						c = 65;
					if ( y != original_y & y != 1)
						c = 66;	 
				}
				if (x != 1 & x != original_x) {
					if (y == original_y | y == 1) // primera columna
						c = 66;
					else  // última columna
						c = 32; 
				}
				write(1, &c, 1);
				y--;
			}
			write(1, "\n", 1);
			x--;
		}
	}
}

int	main(void)
{
	rush(1, 5);
	return (0);
}
