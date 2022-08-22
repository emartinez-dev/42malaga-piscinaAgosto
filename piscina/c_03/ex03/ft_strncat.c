/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmart <franmart@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 18:28:17 by franmart          #+#    #+#             */
/*   Updated: 2022/08/22 13:36:32 by franmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_size;
	unsigned int	i;

	dest_size = ft_strlen(dest) + 1;
	i = 0;
	while (src[i] != '\0' && i < nb)
	{
		dest[dest_size] = src[i];
		dest_size++;
		i++;
	}
	dest[dest_size + 1] = '\0';
	return (dest);
}
