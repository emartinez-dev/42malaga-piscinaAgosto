/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franmart <franmart@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 11:07:21 by franmart          #+#    #+#             */
/*   Updated: 2022/08/19 10:01:23 by franmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 65 && *(str + i) <= 90)
			*(str + i) += 32;
		i++;
	}
	return (str);
}

char	*ft_char_upcase(char *str)
{
	if (*(str) >= 97 && *(str) <= 122)
			*(str) -= 32;
	return (str);
}

int	ft_char_is_alphanumeric(char *str)
{
	int	c;

	c = *(str);
	if (c < 48 || c > 122)
		return (0);
	if (c > 57 && c < 65)
		return (0);
	if (c > 90 && c < 97)
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	ft_char_upcase(&str[i]);
	i++;
	while (i > 0 && str[i] != '\0')
	{
		if (ft_char_is_alphanumeric(&str[i - 1]) == 0)
			ft_char_upcase(&str[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
