/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   possibilites.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmart <franmart@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 22:08:19 by franmart          #+#    #+#             */
/*   Updated: 2022/08/21 22:08:28 by franmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_col_pos(int n, int matrix[9][9], int col, int k)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (matrix[i][col] == k)
			return (0);
		i++;
	}
	return (1);
}

int	ft_row_pos(int n, int matrix[9][9], int row, int k)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (matrix[row][i] == k)
			return (0);
		i++;
	}
	return (1);
}

int	ft_can_put(int n, int matrix[9][9], int c[2], int k)
{
	if (ft_col_pos(n, matrix, c[1], k) && ft_row_pos(n, matrix, c[0], k))
		return (1);
	return (0);
}
