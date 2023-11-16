/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 12:29:40 by asohrabi          #+#    #+#             */
/*   Updated: 2023/07/06 13:39:56 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h> */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0 || index == 1)
		return (index);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
int main(void)
{
	int	a = 7;
	printf("%d\n", ft_fibonacci(a));
}*/
