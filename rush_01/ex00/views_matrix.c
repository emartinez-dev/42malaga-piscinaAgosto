/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   views_matrix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmart <franmart@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 19:22:31 by franmart          #+#    #+#             */
/*   Updated: 2022/08/21 19:22:58 by franmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_putstr(char *str);

void	ft_create_views_matrix(int *views, int n, int matrix[4][20])
{
	int	i;

	i = 0;
	while (i <= n)
	{
		matrix[0][i] = views[i];
		matrix[1][i] = views[i + n];
		matrix[2][i] = views[i + n * 2];
		matrix[3][i] = views[i + n * 3];
		i++;
	}
}

void	ft_create_solve_matrix(int n, int matrix[9][9])
{
	int	i;
	int	j;

	i = 0;
	while (i <= n)
	{
		j = 0;
		while (j <= n)
		{
			matrix[i][j] = 0;
			j++;
		}
		i++;
	}
}

int	ft_check_empty(int n, int matrix[9][9])
{
	int	i;
	int	j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			if (matrix[i][j] != 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_print_matrix(int n, int matrix[9][9])
{
	int	i;
	int	j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			ft_putnbr(matrix[i][j]);
			ft_putstr(" ");
			j++;
		}
		ft_putstr("\n");
		i++;
	}
}
