/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmart <franmart@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 09:33:12 by franmart          #+#    #+#             */
/*   Updated: 2022/08/18 10:46:24 by franmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

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

int	main(void)
{
	char	c1[30]="Hola ";
	char	c2[]="mundooo!";
	unsigned int	i;
	unsigned int	j;

	i = strlcat(c1, c2, 8);
	printf("%s", c1);
	printf("\n");
	printf("%d\n", i);

	char	c3[30]="Hola ";
	printf("La mia:\n");
	j = ft_strlcat(c3, c2, 8);
	printf("%s", c3);
	printf("\n");
	printf("%d", j);
	return (0);
}
