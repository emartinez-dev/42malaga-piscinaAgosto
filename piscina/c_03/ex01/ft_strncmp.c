/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmart <franmart@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 15:45:44 by franmart          #+#    #+#             */
/*   Updated: 2022/08/22 11:50:27 by franmart         ###   ########.fr       */
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

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	len1;
	unsigned int	len2;
	int				result;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	result = 0;
	i = 0;
	while (i < n && (i < len1 || i < len2) && result == 0)
	{
		result += (s1[i] - s2[i]);
		i++;
	}
	return (result);
}
