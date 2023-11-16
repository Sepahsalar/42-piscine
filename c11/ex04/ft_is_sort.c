/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 16:46:16 by asohrabi          #+#    #+#             */
/*   Updated: 2023/07/20 17:10:08 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	is_sort;

	i = 0;
	is_sort = 1;
	while (i < length - 1 && is_sort)
	{
		if ((*f)(tab[i], tab [i + 1]) < 0)
			is_sort = 0;
		i++;
	}
	if (is_sort != 1)
	{
		is_sort = 1;
		i = 0;
		while (i < length - 1)
		{
			if ((*f)(tab[i], tab[i + 1]) > 0)
				return (0);
			i++;
		}
	}
	return (1);
}
/*
int        ft_cmp(int a, int b)
{
    return (a - b);
}

int        main(void)
{
    int	tab[] = {7, 6, 6, 6, 5, 5, 3, 3, 2, 0};
    int	length;

    length = 10;

    printf("%d\n", ft_is_sort(tab, length, &ft_cmp));
   
}*/
