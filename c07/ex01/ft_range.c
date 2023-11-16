/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 11:25:14 by asohrabi          #+#    #+#             */
/*   Updated: 2023/07/11 12:32:32 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*p;
	int	i;
	int	m;

	i = 0;
	m = min;
	if (max <= min)
		return (0);
	else
	{
		p = (int *)malloc((max - min + 1) * sizeof(int));
		while (i < (max - m))
		{
			p[i] = min;
			i++;
			min++;
		}
		return (p);
	}
}
/*
int	main(void)
{
	int i = 0;
	int min = -1;
	int max = 5;
	int	*s = ft_range(min, max);
	while (i < (max - min))
	{
		printf("%d\n", s[i]);
		i++;
	}
}*/
