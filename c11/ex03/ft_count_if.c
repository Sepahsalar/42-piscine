/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 16:35:32 by asohrabi          #+#    #+#             */
/*   Updated: 2023/07/20 16:42:17 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < length)
	{
		if ((*f)(tab[i]) != 0)
			count++;
		i++;
	}
	return (count);
}
/*
int	ft_is_char(char *s)
{
	if (*s == 'a')
		return (1);
	return (0);
}

int	main(void)
{
	char *array[] = {"O", "a", "i", "a", "a"};
	printf("%d\n", ft_count_if(array, 5, &ft_is_char));
}*/
