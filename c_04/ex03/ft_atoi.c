/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmart <franmart@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 19:09:10 by franmart          #+#    #+#             */
/*   Updated: 2022/08/24 10:57:20 by franmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_positive(char *str)
{
	int	n_minus;
	int	i;

	n_minus = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 45)
		{
			n_minus++;
			i++;
		}
		else if (str[i] == 32 || str[i] == 43)
			i++;
		else
			return (n_minus % 2 == 0);
	}
	return (n_minus % 2 == 0);
}

int	ft_int_digits(char *str)
{
	int	encountered;
	int	i;
	int	x;

	i = 0;
	x = 0;
	encountered = 0;
	while (str[i] != '\0')
	{
		if (encountered == 0 && (str[i] >= 48 && str[i] <= 57))
			encountered = 1;
		if (encountered == 1 && (str[i] < 48 || str[i] > 57))
			encountered = 2;
		if (encountered == 1 && (str[i] >= 48 && str[i] <= 57))
			x++;
		i++;
	}
	return (x);
}

int	ft_pow(int j, int power)
{
	int	i;
	int	result;

	result = j;
	i = 1;
	if (j == 0)
		return (0);
	if (power == 0)
		return (1);
	while (i < power)
	{
		result *= j;
		i++;
	}
	return (result);
}

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	j;

	result = 0;
	i = 0;
	j = ft_int_digits(str);
	while (str[i] != '\0')
	{
		while (str[i] >= 48 && str[i] <= 57 && j > 0)
		{
			result = result + ((str[i] - 48) * ft_pow(10, j - 1));
			i++;
			j--;
		}
		i++;
	}
	if (!ft_is_positive(str))
		return (result * -1);
	return (result);
}
