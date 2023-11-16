/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:18:28 by asohrabi          #+#    #+#             */
/*   Updated: 2023/07/15 17:57:24 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ft_stock_str.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct s_stock_str
{
int size;
char *str;
char *copy;
} t_stock_str;

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*p;
	int		i;

	i = 0;
	p = (char *)malloc(ft_strlen(src) + 1);
	if (p == 0)
		return (0);
	while (src[i] != '\0')
	{
		p[i] = src[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*p;
	int			i;

	i = 0;
	p = malloc((ac + 1) * sizeof(t_stock_str));
	if (p == 0)
		return (0);
	while (i < ac)
	{
		p[i].size = ft_strlen(av[i]);
		p[i].str = av[i];
		p[i].copy = ft_strdup(av[i]);
		i++;
	}
	p[i] = (t_stock_str){0, 0, 0};
	return (p);
}

int	main(int a, char **b)
{
	int			j = 0;
	t_stock_str	*s;
    int num = 3;
	s = ft_strs_to_tab(a, b);
	while (j < 3)
    {
        if (num == s[j].size)
            printf("%s\n", s[j].str);
        j++;
    }
   j = 0;
	while (j < a)
	{
		printf("%d\n", j);
		printf("\t| original : $%s$ @ %p\n", s[j].str, s[j].str);
		printf("\t|   copied : $%s$ @ %p\n", s[j].copy, s[j].copy);
		printf("\t|     size : %d\n", s[j].size);
		j++;
	}
}
