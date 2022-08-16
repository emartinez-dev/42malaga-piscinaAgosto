/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmart <franmart@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 11:07:21 by franmart          #+#    #+#             */
/*   Updated: 2022/08/16 11:59:53 by franmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	capitalize;
	int	c;

	i = 0;
	capitalize = 1;
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if (c == 32 || c == 45 || c == 43)
			capitalize = 1;
		else if (c >= 97 && c <= 122 && capitalize == 1)
		{
			*(str + i) -= 32;
			capitalize = 0;
		}
		i++;
	}
	return (str);
}
