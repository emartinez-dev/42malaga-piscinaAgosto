/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarboni <icarboni@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 16:53:57 by icarboni          #+#    #+#             */
/*   Updated: 2022/08/28 20:51:59 by icarboni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lib.h"

int	ft_search_triplet(t_dictionary **head, int t)
{
	t_dictionary	*dict;

	dict = *head;
	while ((dict)->next != 0)
	{
		if ((dict)->triplet == (t * (-1)))
		{
			ft_putstr((dict)->value);
			return (1);
		}
		dict = (dict)->next;
	}
	return (-1);
}

int	ft_search_digit(t_dictionary **head, int d)
{
	t_dictionary	*dict;

	dict = *head;
	while ((dict)->next != 0)
	{
		if ((dict)->key == d)
		{
			ft_putstr((dict)->value);
			return (1);
		}
		dict = (dict)->next;
	}
	return (-1);
}

t_dictionary	*ft_search_last(t_dictionary **head)
{
	t_dictionary	*dict;

	dict = *head;
	while ((dict)->next != 0)
		dict = (dict)->next;
	return (dict);
}

t_dictionary	*ft_create_node(char *num, char *word)
{
	t_dictionary	*new;
	char			*value;
	int				new_key;
	int				new_triplet;

	new = (t_dictionary *)malloc(sizeof(t_dictionary));
	value = (char *)malloc(sizeof(char) * ft_strlen(word));
	ft_strcpy(value, word);
	ft_get_key_triplet(num, &new_key, &new_triplet);
	new->key = new_key;
	new->value = value;
	new->triplet = new_triplet;
	new->next = 0;
	return (new);
}

int	ft_add_to_struct(t_dictionary **head, char *num, char *word)
{
	t_dictionary	*last;

	if (*head == 0)
		*head = ft_create_node(num, word);
	else
	{
		last = ft_search_last(head);
		last->next = ft_create_node(num, word);
	}
	return (0);
}
