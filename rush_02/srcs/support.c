/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   support.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarboni <icarboni@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 16:56:15 by icarboni          #+#    #+#             */
/*   Updated: 2022/08/28 22:46:19 by icarboni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

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

char	*ft_strcpy(char *dest, char *src)
{
	int	c;

	c = 0;
	while (src[c] != '\0')
	{
		*(dest + c) = src[c];
		c++;
	}
	*(dest + c) = '\0';
	return (dest);
}

int	ft_remove_space_signo(char **str)
{
	while ((*str)[0] == ' '
		|| ((*str)[0] >= 9 && (*str)[0] <= 13))
	{
		if ((*str)[1] == '\0')
			return (-1);
		(*str)++;
	}
	if ((*str)[0] == '-')
		return (-1);
	if ((*str)[0] == '+')
	{
		if ((*str)[1] == '\0')
			return (-1);
		(*str)++;
	}
	return (0);
}

int	ft_check_num(char **str)
{
	int	i;

	i = 0;
	if (ft_remove_space_signo(str) == -1)
		return (-1);
	while ((*str)[0] == '0')
	{
		if ((*str)[i + 1] == '\0')
			return (0);
		(*str)++;
	}
	while ((*str)[i] != '\0')
	{
		if (!((*str)[i] >= '0' && (*str)[i] <= '9'))
			return (-1);
		i++;
		if ((i / 3) > 13)
			return (-1);
	}
	return (0);
}
