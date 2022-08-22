/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmart <franmart@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 21:13:44 by franmart          #+#    #+#             */
/*   Updated: 2022/08/21 21:13:47 by franmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_row_score(int answer_matrix[9][9], int n, int index);
int	ft_reverse_row_score(int answer_matrix[9][9], int n, int index);
int	ft_col_score(int answer_matrix[9][9], int n, int index);
int	ft_reverse_col_score(int answer_matrix[9][9], int n, int index);

int	ft_can_put(int n, int matrix[9][9], int c[2], int k);

int	ft_solved_matrix(int n, int matrix[9][9], int views_matrix[4][20])
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (ft_col_score(matrix, n, i) != views_matrix[0][i])
			return (0);
		if (ft_reverse_col_score(matrix, n, i) != views_matrix[1][i])
			return (0);
		if (ft_row_score(matrix, n, i) != views_matrix[2][i])
			return (0);
		if (ft_reverse_row_score(matrix, n, i) != views_matrix[3][i])
			return (0);
	}
	return (1);
}

void	ft_solve(int n, int matrix[9][9], int views_matrix[4][20])
{
	int	k;
	int	coords[2];

	coords[0] = -1;
	while (++coords[0] < n)
	{
		coords[1] = -1;
		while (++coords[1] < n)
		{
			if (matrix[coords[0]][coords[1]] != 0)
			{
				k = 0;
				while (++k < n)
				{
					if (ft_can_put(n, matrix, coords, k))
					{
						matrix[coords[0]][coords[1]] = k;
						ft_solve(n, matrix, views_matrix);
						if (ft_solved_matrix(n, matrix, views_matrix) == 0)
							matrix[coords[0]][coords[1]] = 0;
					}
				}
			}
		}
	}
}
