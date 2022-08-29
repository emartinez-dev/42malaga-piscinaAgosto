/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dahurtad <dahurtad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 12:07:40 by dahurtad          #+#    #+#             */
/*   Updated: 2022/08/13 13:09:35 by franmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_decision(int x, int y, int count_x, int count_y);

void	ft_first_last_row(int x, int y, int count_x, int count_y);

void	ft_first_last_row(int x, int y, int count_x, int count_y)
{
	if (count_x > 1 && count_x < x)
	{
		ft_putchar('B');
	}
	else
	{
		if (count_x / count_y == x || count_y / count_x == y)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('A');
		}
	}
}

void	rush(int x, int y);

void	ft_decision(int x, int y, int count_x, int count_y)
{
	if (count_y == 1 || count_y == y)
	{
		ft_first_last_row(x, y, count_x, count_y);
	}
	else
	{
		if (count_x == 1 || count_x == x)
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar(' ');
		}
	}
}

void	rush(int x, int y)
{
	int	count_x;
	int	count_y;

	count_y = 1;
	while (count_y <= y)
	{
		count_x = 1;
		while (count_x <= x)
		{
			ft_decision(x, y, count_x, count_y);
			count_x++;
		}
		write(1, "\n", 1);
		count_y++;
	}
}
