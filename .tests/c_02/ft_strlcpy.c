/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmart <franmart@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:36:28 by franmart          #+#    #+#             */
/*   Updated: 2022/08/17 16:35:41 by franmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

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

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int src_len;

	src_len = ft_strlen(src);
	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[size - 1] = '\0';
	return (src_len);
}

int	main(void)
{
	int i;
	int j;
	int size;
	char src[7] = "Holaaa";
	char dest[6];
	char dest2[6];

	size = 5;
	printf("Mi funcion:\n");
	i = ft_strlcpy(dest, src, size);
	printf("%s", dest);
	printf("\n");
	printf("%d", i);

	printf("\n");

	printf("Funcion buena:\n");
	j = strlcpy(dest2, src, size);
	printf("%s", dest2);
	printf("\n");
	printf("%d", j);
}
