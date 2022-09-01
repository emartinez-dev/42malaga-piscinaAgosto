/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_m.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiaz-ru <sdiaz-ru@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 14:58:12 by sdiaz-ru          #+#    #+#             */
/*   Updated: 2022/08/31 18:40:30 by sdiaz-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/lib.h"

void	ft_solve_cell(t_matrix *m)
{
	int	i;
	int	j;
	int	k;
	int	exit;

	exit = 1;
	k = 0;
	i = 0;
	j = 0;
	while (i + m->row_pos < m->n_rows && exit)
	{
		j = 0;
		while (j + m->col_pos < m->n_cols && exit)
		{
			if (m->matrix[i + m->row_pos][j + m->col_pos] == m->obstacle)
				exit = 0;
			if (m->matrix[i + m->row_pos][j + m->col_pos] != m->obstacle && i == j)
			{
				k++;
			}
			j++;
		}
		i++;
	}
	if (k > m->max_size_found)
	{
		m->max_size_found = k;
		m->col_found = m->col_pos;
		m->row_found = m->row_pos;
	}
}

void	ft_recorrer(t_matrix *m)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (m->row_pos < m->n_rows)
	{	
		m->col_pos = 0;
		while (m->col_pos  < m->n_cols)
		{
			ft_solve_cell(m);
			m->col_pos++;
		}
		m->row_pos++;
	}
	i = 0;
	while (i < m->max_size_found)
	{
		j = 0;
		while (j < m->max_size_found)
		{
			m->matrix[m->row_found + i ][m->col_found + j] = m->full;
			j++;
		}
		i++;
	}
		
}
