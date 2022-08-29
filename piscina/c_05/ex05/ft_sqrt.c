/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmart <franmart@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 15:55:51 by franmart          #+#    #+#             */
/*   Updated: 2022/08/29 13:36:41 by franmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	if (power == 0)
		return (1);
	if (power <= 0 || nb == 0)
		return (0);
	result = nb * ft_recursive_power(nb, power - 1);
	return (result);
}

int	ft_sqrt(int nb)
{
	int	i;
	int	result;

	i = 0;
	if (nb > 2147395600)
		return (0);
	while (ft_recursive_power(i, 2) <= nb)
	{
		result = ft_recursive_power(i, 2);
		if (result == nb)
			return (i);
		i++;
	}
	return (0);
}
