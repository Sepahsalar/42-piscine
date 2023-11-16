/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 17:05:08 by asohrabi          #+#    #+#             */
/*   Updated: 2023/07/07 11:35:11 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h> */

int	ft_is_prime(int n)
{
	int	i;

	i = 2;
	if (n <= 1)
		return (0);
	if (n == 2147483647)
		return (1);
	while (i <= n / i)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 0)
		return (2);
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}
/*
int	main(void)
{
	int a = 8;
	printf("%d\n", ft_find_next_prime(a));
}*/
