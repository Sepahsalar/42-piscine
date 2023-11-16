/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:08:16 by asohrabi          #+#    #+#             */
/*   Updated: 2023/07/19 23:22:42 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_header.h"

int	main(int argc, char **argv)
{
	int		i;
	int		fd;
	int		bytes_read;
	char	buf[5000];

	i = 1;
	if (argc == 1)
    {
        bytes_read = read(0, buf, sizeof(buf) - 1);
        buf[bytes_read] = '\0';
    }
	else
	{
		while (i < argc)
		{
			fd = open(argv[i], O_RDONLY);
			if (fd == -1)
			{
				ft_putstr("map error\n");
				exit(1);
			}
			bytes_read = read(fd, buf, sizeof(buf) - 1);
			buf[bytes_read] = '\0';
			t_map *map = ft_read_map(fd, argv[i], buf);
			close(fd);
			free(map);
			i++;
		}
	}
	return (0);
}
