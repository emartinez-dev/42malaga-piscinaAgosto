/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_matrix.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmart <franmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 15:20:01 by franmart          #+#    #+#             */
/*   Updated: 2022/09/01 13:32:10 by franmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/lib.h"

int	ft_parse_first_line(char *content, t_matrix *matrix)
{
	int		i;
	int		j;

	i = 0;
	matrix->n_rows = ft_atoi(content);
	while (content[i] >= '0' && content[i] <= '9')
		i++;
	matrix->empty = content[i];
	matrix->obstacle = content[i + 1];
	matrix->full = content[i + 2];
	j = 0;
	while (content[i + j] != '\n')
		j++;
	if (j != 3)
		return (-1);
	if ((matrix->empty == matrix->obstacle || matrix->empty == matrix->full
			|| matrix->obstacle == matrix->full))
		return (-1);
	return (i + 4);
}

int	ft_check_chars(char *c, t_matrix *matrix)
{
	int	i;
	int	empty_count;

	i = 0;
	empty_count = 0;
	while (c[i] != '\0')
	{
		if (c[i] == matrix->empty)
			empty_count++;
		else if (c[i] != matrix->obstacle && c[i] && matrix->full
			&& c[i] != '\n' && c[i] != matrix->empty)
			return (-1);
		i++;
	}
	return (empty_count > 0);
}

int	ft_parse_matrix(char *content, t_matrix *matrix)
{
	int	i;
	int	max_len;

	i = 0;
	max_len = ft_lnlen(content);
	matrix->matrix = malloc(matrix->n_rows * sizeof(char *));
	matrix->col_pos = 0;
	matrix->max_size_found = 0;
	matrix->row_pos =0;
	matrix->n_cols = max_len;
	if (ft_check_chars(content, matrix) != 1)
		return (-1);
	while (i < matrix->n_rows)
	{
		if (ft_lnlen(content) == max_len)
		{
			matrix->matrix[i] = malloc((max_len + 1) * sizeof(char));
			ft_lncpy(content, matrix->matrix[i]);
			content += max_len + 1;
			i++;
		}
		else
			return (-1);
	}
	return (1);
}

