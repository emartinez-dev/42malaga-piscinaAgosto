/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scorer.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmart <franmart@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 20:14:47 by franmart          #+#    #+#             */
/*   Updated: 2022/08/21 20:44:50 by franmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_row_score(int answer_matrix[9][9], int n, int index)
{
	int	i;
	int	temp;
	int	score;
	int	cell;

	i = 0;
	score = 0;
	temp = 0;
	while (i < n)
	{
		cell = answer_matrix[index][i];
		if (cell > temp)
		{
			temp = cell;
			score++;
		}
		i++;
	}
	return (score);
}

int	ft_reverse_row_score(int answer_matrix[9][9], int n, int index)
{
	int	i;
	int	temp;
	int	score;
	int	cell;

	i = 0;
	score = 0;
	temp = 0;
	while (i > n)
	{
		cell = answer_matrix[index][i];
		if (cell > temp)
		{
			temp = cell;
			score++;
		}
		i--;
	}
	return (score);
}

int	ft_col_score(int answer_matrix[9][9], int n, int index)
{
	int	i;
	int	temp;
	int	score;
	int	cell;

	i = 0;
	score = 0;
	temp = 0;
	while (i < n)
	{
		cell = answer_matrix[i][index];
		if (cell > temp)
		{
			temp = cell;
			score++;
		}
		i++;
	}
	return (score);
}

int	ft_reverse_col_score(int answer_matrix[9][9], int n, int index)
{
	int	i;
	int	temp;
	int	score;
	int	cell;

	i = 0;
	score = 0;
	temp = 0;
	while (i > n)
	{
		cell = answer_matrix[i][index];
		if (cell > temp)
		{
			temp = cell;
			score++;
		}
		i--;
	}
	return (score);
}
