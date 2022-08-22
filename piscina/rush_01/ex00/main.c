/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmart <franmart@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 17:31:37 by franmart          #+#    #+#             */
/*   Updated: 2022/08/21 23:30:27 by franmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_number_of_sides(char *c);
void	ft_putstr(char *str);
void	ft_create_views_matrix(int *views, int n, int matrix[4][20]);
void	ft_create_solve_matrix(int n, int matrix[9][9]);
void	ft_parse_args(char *c, int max_n, int args_arr[100]);
void	ft_solve(int n, int matrix[9][9], int views_matrix[4][20]);
void	ft_print_matrix(int n, int matrix[9][9]);
int		ft_check_empty(int n, int matrix[9][9]);

int	main(int argc, char *argv[])
{
	int	n;
	int	matrix[9][9];
	int	*args_arr;
	int	views_matrix[4][20];

	n = 0;
	if (argc == 2)
	{
		n = ft_number_of_sides(argv[1]);
		if (n > 3 && n < 10)
		{
			ft_create_solve_matrix(n, matrix);
			args_arr = malloc(n * 8);
			ft_parse_args(argv[1], n, args_arr);
			ft_create_views_matrix(args_arr, n, views_matrix);
			ft_solve(n, matrix, views_matrix);
			ft_print_matrix(n, matrix);
		}
		else
			ft_putstr("Error\n");
	}
	return (0);
}
