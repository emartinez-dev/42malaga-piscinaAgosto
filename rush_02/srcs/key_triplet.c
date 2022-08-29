/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_triplet.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarboni <icarboni@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 16:55:22 by icarboni          #+#    #+#             */
/*   Updated: 2022/08/28 16:56:04 by icarboni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lib.h"

int	ft_atoi(char *str)
{
	int	num;
	int	n;
	int	i;

	num = 0;
	i = 0;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		n = str[i] - 48;
		num = num * 10;
		num = num + n;
		i++;
	}
	return (num);
}

void	ft_get_key_triplet(char *num, int *key, int *triplet)
{
	int	i;

	if (ft_strlen(num) > 3 && (num[0] - 48) == 1
		&& (num[1] - 48) == 0 && (num[2] - 48) == 0
		&& (num[3] - 48) == 0)
	{
		i = 1;
		*key = 1;
		while ((num[i] - 48) == 0)
			i++;
		*triplet = ((i) / 3) * (-1);
	}
	else
	{
		i = ft_atoi(num);
		*key = i;
		*triplet = i;
	}
}
