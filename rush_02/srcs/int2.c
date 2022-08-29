/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmart <franmart@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 16:51:10 by franmart          #+#    #+#             */
/*   Updated: 2022/08/28 22:44:50 by franmart         ###   ########.fr       */
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

void	ft_int_to_text(t_dictionary **head, char *n)
{
	int	len;
	int	triplet;
	int	rest;
	int	i;

	i = 0;
	len = ft_strlen(n);
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
				else if (rest == 2)
				{
					if ((n[i] - 48) < 2)
					{
						ft_search_digit(head, ft_less_2(n, i));
						if (!(triplet == 0))
							ft_search_triplet(head, triplet);
						i++;
					}
					else
					{
						ft_search_digit(head, (n[i] - 48) * 10);
						i++;
						continue ;
					}
				}
				else if (rest == 1)
					ft_search_digit(head, (n[i] - 48));
			}
			if (!(triplet == 0) && (rest == 1)
				&& !((n[i] - 48) == 0 && (n[i - 1] - 48) == 0
				&& (n[i - 2] - 48) == 0))
					ft_search_triplet(head, triplet);
			i++;
		}
	}
}
