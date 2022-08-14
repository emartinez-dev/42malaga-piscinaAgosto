/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmart <franmart@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 11:05:18 by franmart          #+#    #+#             */
/*   Updated: 2022/08/14 12:00:35 by franmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int c;
	
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb = nb / 10;
	}
	else if (nb < 10 && nb >= 0)
	{
		c = nb + 48;
		write(1, &c, 1);
	}

}

int	main(void)
{
	ft_putnbr(7823452);
	return (0);
}
