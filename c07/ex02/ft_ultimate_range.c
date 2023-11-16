/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 14:16:37 by asohrabi          #+#    #+#             */
/*   Updated: 2023/07/11 16:59:33 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	m;

	i = 0;
	m = min;
	if (max <= min)
	{
		*range = 0;
		return (0);
	}
	else
	{
		*range = (int *)malloc((max - min) * sizeof(int));
		if (*range == 0)
			return (-1);
		while (i < (max - m))
		{
			(*range)[i] = min;
			i++;
			min++;
		}
		return (max - m);
	}
}

int	main(void)
{
	int min = -1;
	int max = 5;
	int	i = 0;
	int *r;
	int	s = ft_ultimate_range(&r, min, max);
	printf("%d\n", s);
	while (i < (max - min))
	{
		printf("%d\n", r[i]);
		i++;
	}
}
