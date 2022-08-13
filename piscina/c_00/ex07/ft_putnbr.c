/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmart <franmart@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 11:05:18 by franmart          #+#    #+#             */
/*   Updated: 2022/08/13 21:12:59 by franmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_first_digit(int x)
{
	while (x >= 10){
		x = x / 10;
	}
	x += 48;
	write(1, &x, 1);
}

void	ft_putnbr(int nb)
{
	int c;
	
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
		ft_putnbr(nb);
	}
	if (nb < 10)
	{
		c = nb + 48;
		write(1, &c, 1);
	}
	if (nb >= 10)
	{
		ft_first_digit(nb);
		ft_putnbr(nb % 10);
	}
}

int	main(void)
{
	ft_putnbr(100);
	return (0);
}
