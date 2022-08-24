/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmart <franmart@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:49:53 by franmart          #+#    #+#             */
/*   Updated: 2022/08/24 17:04:58 by franmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	divisors;
	int	remainder;

	divisors = 0;
	i = 1;
	if (nb <= 0 || nb == 1)
		return (0);
	while (divisors < 3 && i <= nb)
	{
		remainder = nb % i;
		if (remainder == 0)
			divisors++;
		i++;
	}
	return (!(divisors > 2));
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}
