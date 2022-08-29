/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icarboni <icarboni@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 16:51:10 by icarboni          #+#    #+#             */
/*   Updated: 2022/08/28 23:05:15 by icarboni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include "../includes/lib.h"
#include <fcntl.h>

int	ft_check_argc(int argc, char **argv, int *f)
{
	if (argc == 2)
	{
		if (ft_check_num(&argv[1]) == -1)
		{
			ft_putstr("Error\n");
			return (-1);
		}
		*f = open("numbers.dict", O_RDONLY);
		return (2);
	}
	else if (argc == 3)
	{
		if (ft_check_num(&argv[2]) == -1)
		{
			ft_putstr("Error\n");
			return (-1);
		}
		*f = open(argv[1], O_RDONLY);
		return (3);
	}
	return (-1);
}

int	main(int argc, char **argv)
{
	struct s_dictionary	*head;
	int					res;
	int					f;
	int					len;

	f = 1;
	head = 0;
	res = -1;
	if (argc != 1)
		res = ft_check_argc(argc, argv, &f);
	if (res == 2)
	{
		len = ft_strlen(argv[1]);
		if (!(ft_load_dictionary(&head, f) == -1))
			ft_int_to_text(&head, argv[1]);
	}
	else if (res == 3)
	{
		len = ft_strlen(argv[2]);
		if (!(ft_load_dictionary(&head, f) == -1))
			ft_int_to_text(&head, argv[2]);
	}
	return (0);
}
