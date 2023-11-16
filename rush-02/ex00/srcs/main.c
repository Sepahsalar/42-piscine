/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 12:56:14 by akovalev          #+#    #+#             */
/*   Updated: 2023/07/16 23:30:42 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_headers.h"

void	ft_nbr(char *str, char *path);

int	check_numbers(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	char	*path;
	int		a;

	if (argc == 2)
	{
		path = "numbers.dict";
		a = check_numbers(argv[1]);
		if (a == 0)
			ft_putstr("Error\n");
		else
			ft_nbr(argv[1], path);
		return (1);
	}
	else if (argc == 3)
	{
		path = argv[1];
		a = check_numbers(argv[2]);
		if (a == 0)
			ft_putstr("Error\n");
		else
			ft_nbr(argv[2], path);
		return (1);
	}
	else
		ft_putstr("Error\n");
}
