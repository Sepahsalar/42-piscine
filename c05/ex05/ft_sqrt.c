/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:41:36 by asohrabi          #+#    #+#             */
/*   Updated: 2023/07/07 10:57:26 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>*/

int	ft_sqrt(int nb)
{
	unsigned int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while (i * i <= (unsigned int) nb)
	{
		if (i * i == (unsigned int) nb)
			return (i);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	int	a = 25;

	printf("%d\n", ft_sqrt(a));
} */
