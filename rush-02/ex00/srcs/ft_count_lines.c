/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_lines.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 21:48:39 by akovalev          #+#    #+#             */
/*   Updated: 2023/07/16 22:20:56 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_headers.h"

int	ft_count_lines(int fd)
{
	char	buffer[5000];
	int		line_count;
	int		bytes_read;
	int		i;

	i = 0;
	line_count = 0;
	bytes_read = read(fd, buffer, 5000);
	while (i < bytes_read)
	{
		if (buffer[i] == '\n')
		{
			line_count++;
		}
		i++;
	}
	return (line_count);
}
