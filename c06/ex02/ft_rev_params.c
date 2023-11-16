/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 14:46:19 by asohrabi          #+#    #+#             */
/*   Updated: 2023/07/09 14:56:05 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int a, char **b)
{
	int	i;

	i = a;
	while (--i < a)
	{
		if (i == 0)
			break ;
		else
		{
			ft_printstr(b[i]);
			ft_printstr("\n");
		}
	}
}
