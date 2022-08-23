/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmart <franmart@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 09:33:12 by franmart          #+#    #+#             */
/*   Updated: 2022/08/23 18:58:29 by franmart         ###   ########.fr       */
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
	unsigned int	i;
	unsigned int	dest_size;
	unsigned int	src_size;

	i = 0;
	dest_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	if (size > dest_size)
	{
		while (i < size - dest_size - 1)
		{
			dest[i + dest_size] = src[i];
			i++;
		}
		dest[i + dest_size] = '\0';
		return (src_size + dest_size);
	}
	return (src_size + size);
}
