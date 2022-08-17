/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmart <franmart@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:27:27 by franmart          #+#    #+#             */
/*   Updated: 2022/08/17 17:53:28 by franmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	c;

	while (*str != '\0')
	{
		c = *str;
		if (c == 10)
		{
			write(1, "\\", 1);
			write(1, "0a", 2);
		}
		else
			write(1, &c, 1);
		str++;
	}
}
