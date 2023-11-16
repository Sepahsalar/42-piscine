/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:54:35 by asohrabi          #+#    #+#             */
/*   Updated: 2023/07/06 12:15:31 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>*/

int	ft_iterative_power(int nb, int power)
{
	int	f;

	f = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		while (power)
		{
			f = f * nb;
			power--;
		}
	}
	return (f);
}
/*
int	main(void)
{
	int	a = 0;
	int b = 3;
	printf("%d\n", ft_iterative_power(a, b));
}*/
