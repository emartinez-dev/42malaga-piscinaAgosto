/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_auxiliary.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmart <franmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 17:48:06 by franmart          #+#    #+#             */
/*   Updated: 2022/08/31 17:54:25 by franmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/lib.h"

int	ft_file_len(int	*f)
{
	char	c;
	int		r;
	int		len;

	len = 0;
	r = read(*f, &c, 1);
	while (r != 0)
	{
		r = read(*f, &c, 1);
		len++;
	}
	close(*f);
	return (len);
}

char	*ft_read_map(char *name, int *f)
{
	int		len;
	char	*content;

	*f = open(name, O_RDONLY);
	if (*f < 2)
		return (0);
	len = ft_file_len(f);
	*f = open(name, O_RDONLY);
	content = malloc(len * sizeof(char));
	read(*f, content, len);
	close(*f);
	return (content);
}