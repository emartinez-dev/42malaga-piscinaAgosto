/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_to_text.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarboni <icarboni@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 22:48:01 by icarboni          #+#    #+#             */
/*   Updated: 2022/08/28 23:37:31 by icarboni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lib.h"

int	ft_less_2(char *n, int i)
{
	char	n2[2];
	int		atoi;

	n2[0] = n[i];
	n2[1] = n[i + 1];
	atoi = ft_atoi(n2);
	return (atoi);
}

void	ft_int_to_text(t_dictionary **head, char *n, int len)
{
	int	triplet;
	int	rest;
	int	i;

	i = 0;
	if (len == 1 && n[0] == '0')
		ft_search_digit(head, 0);
	else
	{
		while (n[i] != '\0')
		{
			rest = (len - i) % 3;
			triplet = (len - i) / 3;
			if (rest == 0)
				triplet--;
			if (!((n[i] - 48) == 0))
			{
				if (rest == 0)
				{
					ft_search_digit(head, (n[i] - 48));
					ft_search_digit(head, 100);
				}
				else if (rest == 1)
					ft_search_digit(head, (n[i] - 48));
				else if (rest == 2)
				{
					if ((n[i] - 48) < 2)
					{
						ft_search_digit(head, ft_less_2(n, i++));
						if (!(triplet == 0))
							ft_search_triplet(head, triplet);
					}
					else
					{
						ft_search_digit(head, (n[i++] - 48) * 10);
						continue ;
					}
				}
			}
			if (!(triplet == 0) && (rest == 1)
				&& !((n[i] - 48) == 0 && (n[i - 1] - 48) == 0
					&& (n[i - 2] - 48) == 0))
				ft_search_triplet(head, triplet);
			i++;
		}
	}
}
