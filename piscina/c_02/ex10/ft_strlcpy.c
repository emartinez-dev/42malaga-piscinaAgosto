/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmart <franmart@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:36:28 by franmart          #+#    #+#             */
/*   Updated: 2022/08/16 17:41:46 by franmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size - 2 || *(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	if (i < size - 2)
		i++;
		*(dest + i) = '\0';
//	if (size <= i)
//		return (0);
	return (i);
}

int	main(void)
{
	int i;
	
	char src[7] = "Holaaa";
	char dest[2];
	printf("%s", dest);
	printf("\n");
	i = ft_strlcpy(dest, src, 2);
	printf("%s", dest);
	printf("\n");
	printf("%d", i);
}
