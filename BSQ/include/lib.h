/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmart <franmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 08:08:34 by franmart          #+#    #+#             */
/*   Updated: 2022/09/01 13:34:08 by franmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef LIB_H
# define LIB_H

# include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>

typedef struct s_matrix {
	int		n_rows;
	int		n_cols;
	int		row_pos;
	int		col_pos;
	int		max_size_found;
	int		col_found;
	int		row_found;
	char	**matrix;
	char	empty;
	char	obstacle;
	char	full;
}	t_matrix;

int	ft_atoi(char *str);
void	ft_putstr(char *str);
int	ft_strlen(char *str);
int ft_lnlen(char *str);
int ft_lncpy(char *str, char *dest);

int	ft_parse_first_line(char *content, t_matrix *matrix);
int	ft_check_chars(char *c, t_matrix *matrix);
int	ft_parse_matrix(char *content, t_matrix *matrix);

void	ft_recorrer(t_matrix *matrix);
void	ft_solve_cell(t_matrix *matrix);
int	ft_file_len(int	*f);
char	*ft_read_map(char *name, int *f);

# endif