/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 12:24:13 by asohrabi          #+#    #+#             */
/*   Updated: 2023/07/20 12:43:44 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putnbr(int num)
{
	printf("%d", num);
}

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	if (length <= 0)
		return ;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

int main()
{
	int tab[] = {1, 2, 3, 4, 5};
	int length = sizeof(tab) / sizeof(tab[0]);
	
	ft_foreach(tab, length, &ft_putnbr);
	
	return (0);
}

