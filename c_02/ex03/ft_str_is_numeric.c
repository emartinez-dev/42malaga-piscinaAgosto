/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmart <franmart@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 09:39:28 by franmart          #+#    #+#             */
/*   Updated: 2022/08/16 09:44:27 by franmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	c;

	i = 0;
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if (c < 48 || c > 57)
			return (0);
		i++;
	}
	return (1);
}
