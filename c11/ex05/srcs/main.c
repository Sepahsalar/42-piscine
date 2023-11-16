/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 17:35:54 by asohrabi          #+#    #+#             */
/*   Updated: 2023/07/20 18:47:19 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_headers.h"

char	ft_find_op(char *s)
{
	if (s[0] == '\0' || s[1] != '\0')
		return (-1);
	return (s[0]);
}

int	ft_validate(int b, char op)
{
	if (op == '/' && b == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	if (op == '%' && b == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	return (1);
}

void	ft_cal(int a, int b, char operator)
{
	char	*ops;
	int		(*cals[5])(int, int);
	int		res;
	int		i;

	ops = (char []){'+', '-', '/', '*', '%'};
	cals[0] = &ft_add;
	cals[1] = &ft_minus;
	cals[2] = &ft_devide;
	cals[3] = &ft_multiply;
	cals[4] = &ft_modulo;
	res = 0;
	i = 0;
	while (i < 5)
	{
		if (operator == ops[i])
		{
			res = (cals[i])(a, b);
			break ;
		}
		i++;
	}
	ft_putnbr(res);
	ft_putstr("\n");
}

int	main(int argc, char **argv)
{
	int		a;
	int		b;
	char	operator;

	if (argc == 4)
	{
		a = ft_atoi(argv[1]);
		b = ft_atoi(argv[3]);
		operator = ft_find_op(argv[2]);
		if (ft_validate(b, operator))
			ft_cal(a, b, operator);
	}
}
