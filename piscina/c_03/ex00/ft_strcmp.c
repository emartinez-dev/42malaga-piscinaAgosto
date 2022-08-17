/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmart <franmart@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 17:59:03 by franmart          #+#    #+#             */
/*   Updated: 2022/08/17 15:42:42 by franmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	result;
	int	len1;
	int	len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	result = 0;
	i = 0;
	while ((i < len1 || i < len2) && result == 0)
	{
		result += (s1[i] - s2[i]);
		i++;
	}
	return (result);
}
