/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_auxiliary.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmart <franmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 19:26:24 by franmart          #+#    #+#             */
/*   Updated: 2022/09/01 13:33:43 by franmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/lib.h"

void	ft_putstr(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		write(1, &str[c], 1);
		c++;
	}
}

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	return (c);
}

int ft_lnlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\n')
	{
		c++;
	}
	return (c);
}

int ft_lncpy(char *str, char *dest)
{
	int	c;

	c = 0;
	while (str[c] != '\n')
	{
		dest[c] = str[c];
		c++;
	}
	str[c] = '\0';
	return (c);
}
