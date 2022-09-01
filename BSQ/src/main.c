/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmart <franmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 13:30:40 by franmart          #+#    #+#             */
/*   Updated: 2022/09/01 13:37:41 by franmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/lib.h"

int	main(int argc, char **argv)
{
	int			i;
	int			f;
	int			check_line;
	char		*content;
	t_matrix	matrix;

	f = 0;
	i = 1;
	while (i < argc)
	{
		content = ft_read_map(argv[i], &f);
		if (content != 0)
		{
			check_line = ft_parse_first_line(content, &matrix);
			if (check_line == -1)
			{
				ft_putstr("map error");
				return (-1);
			}
			else if (ft_parse_matrix(content + check_line, &matrix) != -1)
				ft_recorrer(&matrix);
			else
			{
				ft_putstr("map error");
				return (-1);
			}
		}
		else
		{
			ft_putstr("map error");
			return (-1);
		}
		i++;
	}
	i = -1;
	while (++i < matrix.n_rows)
	{
		ft_putstr(matrix.matrix[i]);
		ft_putstr("\n");
	}
}
