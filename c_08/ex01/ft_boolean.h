/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmart <franmart@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 14:05:58 by franmart          #+#    #+#             */
/*   Updated: 2022/09/10 15:38:25 by franmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# include	<unistd.h>
# define FT_BOOLEAN_H
# define TRUE 1
# define FALSE -1
# define SUCCESS 0
# define EVEN_MSG "I have an even number of arguments."
# define ODD_MSG "I have an odd number of arguments."

typedef int	t_bool;
void				ft_putstr(char *str);

int	EVEN(int nbr)
{
	if (nbr % 2 == 0)
		return (1);
	return (0);
}

#endif