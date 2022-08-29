/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmart <franmart@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 11:59:09 by franmart          #+#    #+#             */
/*   Updated: 2022/08/24 15:23:50 by franmart         ###   ########.fr       */
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
