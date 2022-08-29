/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_dictionary.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarboni <icarboni@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 16:51:05 by icarboni          #+#    #+#             */
/*   Updated: 2022/08/28 22:47:05 by icarboni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include "../includes/lib.h"

char	*ft_add_char(char *str, char new)
{
	int		len;
	char	*new_str;
	int		i;

	i = 0;
	len = ft_strlen(str);
	new_str = (char *) malloc(sizeof(char) * (len + 2));
	while (str[i] != '\0')
	{
		new_str[i] = str[i];
		i++;
	}
	new_str[i] = new;
	new_str[++i] = '\0';
	return (new_str);
}

void	ft_switch(int f, char **str, char *c, int *r)
{
	char	*temp;

	temp = ft_add_char(*str, *c);
	free(*str);
	*str = temp;
	*r = read(f, c, 1);
}

int	ft_parse_lines(int f, t_dictionary **head, int r)
{
	char	c;
	char	*num;
	char	*word;

	while (r != 0)
	{
		num = (char *) malloc(sizeof(char));
		word = (char *) malloc(sizeof(char));
		num[0] = '\0';
		word[0] = '\0';
		r = read(f, &c, 1);
		while (((c == ' ') || (c >= 9 && c <= 13)) && r != 0)
			r = read(f, &c, 1);
		while ((c >= '0' && c <= '9') && r != 0)
			ft_switch(f, &num, &c, &r);
		if (((c == ':')
				|| (c == ' ' || (c >= 9 && c <= 13))) && r != 0)
			r = read(f, &c, 1);
		while (c != '\n' && r != 0)
			ft_switch(f, &word, &c, &r);
		if (ft_strlen(num) != 0 && ft_strlen(num) != 0)
			ft_add_to_struct(head, num, word);
	}
	return (0);
}

int	ft_load_dictionary(t_dictionary **head, int f)
{
	int	r;

	r = 1;
	if (ft_parse_lines(f, head, r) == -1)
		ft_putstr("Error parsing dictionary");
	if (close(f) == -1)
		ft_putstr("Error with file close");
	return (0);
}
