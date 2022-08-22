/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmart <franmart@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:36:28 by franmart          #+#    #+#             */
/*   Updated: 2022/08/22 10:31:08 by franmart         ###   ########.fr       */
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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;
	unsigned int	dest_len;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	i = 0;
	if (size > dest_len)
		return (0);
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[size - 1] = '\0';
	return (src_len);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char string[] = "Hola";
	char string_dest[5];
	int	dest_len;
	
	dest_len = ft_strlen(string_dest);
	ft_strlcpy(string_dest, string, 7);
	printf("%s\n", string_dest);
	printf("%d", dest_len);
	return (0);
}	
