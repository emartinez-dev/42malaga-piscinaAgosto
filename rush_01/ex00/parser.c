/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmart <franmart@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:44:04 by franmart          #+#    #+#             */
/*   Updated: 2022/08/21 19:21:58 by franmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_args_length(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 48)
			return (0);
		if (str[i] > 48 && str[i] <= 57)
			result++;
		i++;
	}
	return (result);
}

int	ft_number_of_sides(char *c)
{	
	int	n;
	int	length;

	n = 0;
	length = ft_args_length(c);
	if (length % 4 == 0)
		n = length / 4;
	return (n);
}

void	ft_parse_args(char *c, int *array, int max_n)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		if (c[i] < max_n)
			array[i] = c[i] - '0';
		i++;
	}
}
