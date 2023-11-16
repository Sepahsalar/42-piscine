/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 12:37:49 by asohrabi          #+#    #+#             */
/*   Updated: 2023/07/16 23:30:25 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_headers.h"

void	ft_nbr(char *str, char *path)
{
	t_dict	*dict;
	int		fd;
	char	*buf;
	int		lines;
	int		char_count;

	fd = open(path, O_RDONLY);
	if (fd == -1)
		ft_putstr("Dict Error\n");
	char_count = count_entries(fd);
	close(fd);
	fd = open(path, O_RDONLY);
	lines = ft_count_lines(fd);
	close(fd);
	fd = open(path, O_RDONLY);
	buf = (char *)malloc(char_count * sizeof(char));
	read (fd, buf, char_count);
	dict = read_dictionary(fd, lines, buf);
	close(fd);
	ft_cal(str, dict);
	free_dictionary(dict, lines);
	free(buf);
}
