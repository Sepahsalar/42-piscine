/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 13:17:46 by asohrabi          #+#    #+#             */
/*   Updated: 2023/07/20 13:44:39 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*array;

	array = (int *)malloc(length * sizeof(int));
	if (array == 0)
		return (0);
	i = 0;
	while (i < length)
	{
		array[i] = (*f)(tab[i]);
		i++;
	}
	return (array);
}

int	ft_square(int number)
{
	return (number * number);
}

int	main(void)
{
	int	i;
	int	*tab;
	int	length;
	int	*results;

	length = 10;
	tab = (int *)malloc(length * sizeof(int));
	i = 0;
	while (i < length)
	{
		tab[i] = i;
		i++;
	}
	results = ft_map(tab, length, &ft_square);
	i = 0;
	while (i < length)
	{
		printf("square(%d) = %d\n", i, results[i]);
		i++;
	}
}
