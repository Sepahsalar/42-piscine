/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 11:00:55 by asohrabi          #+#    #+#             */
/*   Updated: 2023/07/01 16:18:37 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	big_con(int z, int r, int i, int j)
{
	if ((z == 1 && r == 1) || (z == j && r == 1))
		ft_putchar('o');
	else if ((z == 1 && r == i) || (z == j && r == i))
		ft_putchar('o');
	else if ((z == 1 && r < i) || (z == j && r < i))
		ft_putchar('-');
	else if ((z < j && r == 1) || (z < j && r == i))
		ft_putchar('|');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	a;
	int	b;

	a = 1;
	b = 1;
	while (a <= y)
	{
		while (b <= x)
		{
			big_con(a, b, x, y);
			b++;
		}
		b = 1;
		ft_putchar('\n');
		a++;
	}
}
