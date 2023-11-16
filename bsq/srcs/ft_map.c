/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 18:02:54 by asohrabi          #+#    #+#             */
/*   Updated: 2023/07/19 23:08:36 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_header.h"

void	ft_map(int fd, char *path, char *buf, t_map **map)
{
	int		i;
	int		j;
	t_Grid	*grid;

	i = 0;
	j = 0;
	grid = parse_line(fd, path, map, buf);
	ft_core(grid);
}
