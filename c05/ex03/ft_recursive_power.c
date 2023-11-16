/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 12:16:56 by asohrabi          #+#    #+#             */
/*   Updated: 2023/07/06 12:28:17 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h> */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
/*
int	main(void)
{
	int	a = 2;
	int b = 3;
	printf("%d\n", ft_recursive_power(a, b));
}*/
