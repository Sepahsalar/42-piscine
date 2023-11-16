/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 11:24:49 by asohrabi          #+#    #+#             */
/*   Updated: 2023/07/09 12:20:18 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	print_error(void);

int		ft_strlen(char *str);

void	border(char *input);

int	is_valid_number(char c)
{
	return (c >= '1' && c <= '4');
}

int	count_valid_numbers(char *st)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (st[i] != '\0')
	{
		if (st[i] != ' ' && is_valid_number(st[i]))
			count++;
		i++;
	}
	return (count);
}

char	*extract_numbers(char *st, int count)
{
	char	*p;
	int		j;
	int		i;

	p = (char *)malloc(count + 1);
	j = 0;
	i = 0;
	while (st[i] != '\0')
	{
		if (st[i] != ' ' && is_valid_number(st[i]))
		{
			p[j] = st[i];
			j++;
		}
		i++;
	}
	p[j] = '\0';
	return (p);
}

void	split_array(char *d, char *subarrays[])
{
	int	i;
	int	j;
	int	index;

	i = 0;
	j = 0;
	index = 0;
	while (i < 4)
	{
		subarrays[i] = (char *)malloc(5);
		j = 0;
		while (j < 4)
		{
			subarrays[i][j] = d[index];
			index++;
			j++;
		}
		subarrays[i][j] = '\0';
		i++;
	}
}

void	process_input(char *input)
{
	int		count;
	int		i;

	i = 0;
	count = count_valid_numbers(input);
	if (count != 16)
	{
		print_error();
		return ;
	}
	border(input);
}
