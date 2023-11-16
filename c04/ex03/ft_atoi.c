/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 16:38:22 by asohrabi          #+#    #+#             */
/*   Updated: 2023/07/05 20:05:27 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>*/

int	ft_putnum(char *str, int a, int sign, int i)
{
	while (str[i] != '\0')
	{
		while (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				sign = sign * -1;
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			a = a * 10 + (str[i] - '0');
			i++;
		}
		i++;
		return (sign * a);
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	a;
	int	sign;
	int	i;
	int	r;

	i = 0;
	a = 0;
	while ((str[i] == '\t') || (str[i] == '\n') || (str[i] == '\v')
		|| (str[i] == '\f') || (str[i] == '\r') || (str[i] == ' '))
		i++;
	sign = 1;
	r = ft_putnum(str, a, sign, i);
	return (r);
}
/*
int	main(void)
{
	char *src = "\t \r \t -+-092t67";
	int val = ft_atoi(src);
	printf("%i\n", val);
	return (0);
}*/
