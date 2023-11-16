/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 18:44:31 by asohrabi          #+#    #+#             */
/*   Updated: 2023/07/04 10:50:09 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while (str[j] != '\0')
	{
		if ((str[j] >= 32 && str[j] <= 47)
			|| (str[j] >= 58 && str[j] <= 64))
			if (str[j + 1] >= 'a' && str[j + 1] <= 'z')
				str[j + 1] = str[j + 1] - 32;
		j++;
	}
	return (str);
}
