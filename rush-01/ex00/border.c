/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   border.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 20:36:59 by asohrabi          #+#    #+#             */
/*   Updated: 2023/07/09 12:57:43 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	print_error(void);

void	split_array(char *d, char *subarrays[]);

char	*extract_numbers(char *st, int count);

void	ft_putchar(char c);

void	con(int r, int c, char *input, char *matrix[6])
{
	char	*subarrays[4];
	char	*d;

	d = extract_numbers(input, 16);
	if (d == '\0')
	{
		free(d);
		return ;
	}
	split_array(d, subarrays);
	if ((c == 1 && r < 6))
		matrix[r][1] = subarrays[2][r - 1];
	else if (c < 6 && r == 1)
		matrix[1][c] = subarrays[0][c - 1];
	else if ((c == 6 && r < 6))
		matrix[r][1] = subarrays[3][r - 1];
	else if (c < 6 && r == 6)
		matrix[1][c] = subarrays[1][c - 1];
	else if (c > 1 && c < 6 && r > 1 && r < 6)
		ft_putchar('0');
	free(d);
}

void	initialize_matrix(char *matrix[6])
{
	int	i;

	i = 0;
	while (i < 6)
	{
		matrix[i] = NULL;
		i++;
	}
}

void	allocate_matrix(char *matrix[6])
{
	int	i;

	i = 0;
	while (i < 6)
	{
		matrix[i] = (char *)malloc(6);
		if (matrix[i] == NULL)
		{
			print_error();
			return ;
		}
		i++;
	}
}

void	free_matrix(char *matrix[6])
{
	int	i;

	i = 0;
	while (i < 6)
	{
		free(matrix[i]);
		i++;
	}
}

void	border(char *input)
{
	char	*matrix[6];
	int		a;
	int		b;

	initialize_matrix(matrix);
	allocate_matrix(matrix);
	a = 1;
	b = 1;
	while (a <= 6)
	{
		while (b <= 6)
		{
			con(a, b, input, matrix);
			b++;
		}
		b = 1;
		ft_putchar('\n');
		a++;
	}
	free_matrix(matrix);
}
