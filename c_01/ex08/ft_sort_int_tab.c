/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmart <franmart@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 10:07:22 by franmart          #+#    #+#             */
/*   Updated: 2022/08/16 08:19:36 by franmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_sort(int *tab, int size)
{
	while (size > 1)
	{
		if (*tab > *(tab + 1))
			return (0);
		size--;
		tab++;
	}
	return (1);
}

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (ft_check_sort(tab, size) == 0)
	{
		while (i < size - 1)
		{
			j = 0;
			while (j < size - i - 1)
			{
				if (*(tab + j) > *(tab + j + 1))
					ft_swap(tab + j, tab + j + 1);
				j++;
			}
		i++;
		}
	}
}
