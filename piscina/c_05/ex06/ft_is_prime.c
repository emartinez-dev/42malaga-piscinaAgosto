/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmart <franmart@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:09:10 by franmart          #+#    #+#             */
/*   Updated: 2022/08/24 16:48:47 by franmart         ###   ########.fr       */
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
