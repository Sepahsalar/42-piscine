/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:50:32 by asohrabi          #+#    #+#             */
/*   Updated: 2023/07/20 16:33:06 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;
	int	res;

	res = 0;
	i = 0;
	while (tab[i])
	{
		if ((*f)(tab[i]) != 0)
		{
			res = 1;
			break ;
		}
		i++;
	}
	return (res);
}

int	ft_is_char(char *s)
{
	if (*s == 'a')
		return (1);
	return (0);
}

int	main(void)
{
	char *array[] = {"O", "q", "i", "a", 0};
	printf("%d\n", ft_any(array, &ft_is_char));
}
