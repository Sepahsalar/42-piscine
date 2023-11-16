/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cal.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 22:53:34 by asohrabi          #+#    #+#             */
/*   Updated: 2023/07/16 23:28:32 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_headers.h"

void	first_3(t_dict *dict, unsigned long long int a)
{
	if (a / 100 > 0)
	{
		ft_putstr(ft_dict(dict, a / 100));
		ft_putchar(' ');
		ft_putstr(ft_dict(dict, 100));
		if (a % 100 != 0)
			ft_putchar(' ');
	}
	if (a % 100 > 0 && a % 100 <= 20)
	{
		ft_putstr(ft_dict(dict, a % 100));
	}
	if (a % 100 <= 99 && a % 100 >= 21)
	{
		ft_putstr(ft_dict(dict, (a % 100 - a % 10)));
		ft_putchar(' ');
		if (a % 10 != 0)
			ft_putstr(ft_dict(dict, (a % 10)));
	}
}

void	second_3(t_dict *dict, unsigned int a)
{
	if (a / 1000 != 0)
	{
		first_3(dict, a / 1000);
		ft_putchar(' ');
		ft_putstr(ft_dict(dict, 1000));
		if (a % 1000 != 0)
			ft_putchar(' ');
	}
	first_3(dict, a % 1000);
}

void	third_3(t_dict *dict, unsigned int a)
{
	if (a / 1000000 != 0)
	{
		first_3(dict, a / 1000000);
		ft_putchar(' ');
		ft_putstr(ft_dict(dict, 1000000));
		if (a % 1000000 != 0)
			ft_putchar(' ');
	}
	second_3(dict, a % 1000000);
}

void	fourth_3(t_dict *dict, unsigned int a)
{
	if (a / 1000000000 != 0)
	{
		first_3(dict, a / 1000000000);
		ft_putchar(' ');
		ft_putstr(ft_dict(dict, 1000000000));
		if (a % 1000000000 != 0)
			ft_putchar(' ');
	}
	third_3(dict, a % 1000000000);
}

void	ft_cal(char	*str, t_dict *dict)
{
	unsigned long long int	a;

	if (ft_strlen(str) > 1 && str[0] == '0')
	{
		ft_putstr("Error\n");
		return ;
	}
	a = ft_atoi_error(str);
	if (a > 4294967295 || a < 0)
		ft_putstr("Error\n");
	else
	{
		if (a == 0)
			ft_putstr(ft_dict(dict, 0));
		else if (ft_strlen(str) == 10)
			fourth_3(dict, a);
		else if (ft_strlen(str) <= 9 && ft_strlen(str) > 6)
			third_3(dict, a);
		else if (ft_strlen(str) <= 6 && ft_strlen(str) > 3)
			second_3(dict, a);
		else if (ft_strlen(str) <= 3)
			first_3(dict, a);
		ft_putchar('\n');
	}
}
