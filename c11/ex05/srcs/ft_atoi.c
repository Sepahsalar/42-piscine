/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 17:37:08 by asohrabi          #+#    #+#             */
/*   Updated: 2023/07/20 18:12:38 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
