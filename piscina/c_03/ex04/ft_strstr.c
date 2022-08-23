/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmart <franmart@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 19:28:52 by franmart          #+#    #+#             */
/*   Updated: 2022/08/23 18:17:43 by franmart         ###   ########.fr       */
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

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	temp_i;
	int	j;
	int	size;

	i = 0;
	size = ft_strlen(str);
	while (i < size)
	{
		temp_i = i;
		j = 0;
		while (str[temp_i] == to_find[j] || to_find[j] == '\0')
		{
			if (to_find[j] == '\0')
				return (&str[i]);
			temp_i++;
			j++;
		}
		temp_i = i;
		i++;
	}
	return (0);
}
