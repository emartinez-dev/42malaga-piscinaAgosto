/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmart <franmart@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 08:10:09 by franmart          #+#    #+#             */
/*   Updated: 2022/08/15 09:28:04 by franmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	mov;
	int	temp;

	mov = size - 1;
	while (mov > 2)
	{
		temp = *tab;
		*tab = *(tab + mov);
		*(tab + mov) = temp;
		mov -= 2;
		tab++;
	}
}
