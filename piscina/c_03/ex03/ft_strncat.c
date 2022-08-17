/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmart <franmart@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 18:28:17 by franmart          #+#    #+#             */
/*   Updated: 2022/08/17 19:36:04 by franmart         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	space_needed;
	unsigned int	i;
	int				dest_size;

	dest_size = ft_strlen(dest);
	space_needed = dest_size + ft_strlen(src) + 1;
	i = 0;
	if (space_needed < (sizeof(*dest) / sizeof(dest[0])))
	{
		while (src[i - 1] != '\0' && i < nb)
		{
			dest[dest_size] = src[i];
			dest_size++;
			i++;
		}
	}
	return (dest);
}
