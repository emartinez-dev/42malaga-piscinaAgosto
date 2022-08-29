/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarboni <icarboni@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 16:56:36 by icarboni          #+#    #+#             */
/*   Updated: 2022/08/28 22:01:34 by icarboni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef LIB_H
# include <stdlib.h>
# define LIB_H

typedef struct s_dictionary {
	int						key;
	char					*value;
	int						triplet;
	struct s_dictionary		*next;
}	t_dictionary;

int				ft_less_2(char *n, int i);
void			ft_int_to_text(t_dictionary **head, char *n);

char			*ft_add_char(char *str, char new);
int				ft_load_dictionary(t_dictionary **head, int f);
void			ft_switch(int f, char **str, char *c, int *r);
int				ft_parse_lines(int f, t_dictionary **head, int r);

void			ft_get_key_triplet(char *num, int *key, int *triplet);
int				ft_atoi(char *str);

void			ft_putstr(char *str);
int				ft_strlen(char *str);
char			*ft_strcpy(char *dest, char *src);
int				ft_check_num(char **str);
int				ft_remove_space_signo(char **str);

int				ft_search_triplet(t_dictionary **head, int t);
int				ft_search_digit(t_dictionary **head, int d);
t_dictionary	*ft_search_last(t_dictionary **head);
t_dictionary	*ft_create_node(char *num, char *word);
int				ft_add_to_struct(t_dictionary **head, char *num, char *word);

#endif
