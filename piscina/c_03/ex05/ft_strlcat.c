/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmart <franmart@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 09:33:12 by franmart          #+#    #+#             */
/*   Updated: 2022/08/18 10:48:13 by franmart         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				dest_size;
	unsigned int	i;

	dest_size = ft_strlen(dest) + 1;
	i = 0;
	while (src[i] != '\0' && i < size)
	{
		dest[dest_size] = src[i];
		dest_size++;
		i++;
	}
	return (dest_size);
}
