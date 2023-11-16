/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 10:12:19 by asohrabi          #+#    #+#             */
/*   Updated: 2023/07/06 11:30:43 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h> */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	f;

	i = 1;
	f = 1;
	if (nb < 0)
		return (0);
	while (i < nb + 1)
		f = f * i++;
	return (f);
}
/*
int	main(void)
{
	int a = 4;
	printf("%d\n", ft_iterative_factorial(a));
}*/
