/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmart <franmart@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 11:05:18 by franmart          #+#    #+#             */
/*   Updated: 2022/08/18 17:50:23 by franmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void	ft_putnbr(int nb)
{
	int	c;

	if (nb == INT_MIN)
	{
		write(1, "-214748364", 10);
		nb = 8;
	}
	if (nb < 0 && nb > INT_MIN)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb / 10 > 0)
		ft_putnbr(nb / 10);
	c = nb % 10 + 48;
	write(1, &c, 1);
}
