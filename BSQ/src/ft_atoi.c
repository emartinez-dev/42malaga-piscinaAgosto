/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmart <franmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 08:24:57 by franmart          #+#    #+#             */
/*   Updated: 2022/08/31 17:54:16 by franmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/lib.h"

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;
	int	flag;

	sign = 1;
	i = 0;
	flag = 0;
	result = 0;
	while (str[i] != '\0' && flag == 0)
	{
		if (str[i] == '-')
			sign *= -1;
		if (str[i] >= '0' && str[i] <= '9')
			result = result * 10 + str[i] - '0';
		if ((str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z'))
			flag = 1;
		i++;
	}
	return (result * sign);
}
