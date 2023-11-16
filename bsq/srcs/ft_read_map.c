/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 12:35:30 by asohrabi          #+#    #+#             */
/*   Updated: 2023/07/19 23:21:08 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_header.h"

int	char_count(int fd)
{
	char	buffer[5000];
	int		bytes_read;
	int		i;

	bytes_read = read(fd, buffer, 5000);
	i = 0;
	while (i < bytes_read)
	{
		i++;
	}
	return (i);
}

t_Grid	*ft_first_line(char *buf)
{
	char	*line_start;
	char	*line_end;
	char	*fl_str;
	t_Grid	*grid;
	int		len;
	char	num_buffer[5000];

	grid = (t_Grid *)malloc(sizeof(t_Grid) * 5000);
	line_start = buf;
	line_end = ft_strchr(buf, '\n');
	if (line_end != NULL)
	{
		*line_end = '\0';
		fl_str = ft_strndup(line_start, line_end - line_start);
		len = ft_strlen(fl_str);
		if (len < 4)
		{
			ft_putstr("map error\n");
			free(fl_str);
			return NULL;
		}
		else
		{
			len = ft_strnlen(fl_str, line_end - line_start);
			grid->filler = fl_str[len - 1];
			grid->obs = fl_str[len - 2];
			grid->empty = fl_str[len - 3];
			ft_strncpy(num_buffer, fl_str, len - 3);
			num_buffer[len - 3] = '\0';
			grid->line_num = ft_atoi(num_buffer);
		}
		free(fl_str);
	}
	return (grid);
}

int	ft_count_lines(int fd, char *path)
{
	char	buf[5000];
	int		line_count;
	int		bytes_read;
	int		i;

	i = 0;
	line_count = 0;
	close(fd);
	fd = open(path, O_RDONLY);
	bytes_read = read(fd, buf, 5000);
	while (i < bytes_read)
	{
		if (buf[i] == '\n')
			line_count++;
		i++;
	}
	return (line_count - 1);
}


t_Grid *parse_line(int fd, char *path, t_map **map, char *buf)
{
    int current_index = 0;
    char ch;
    int x = 0; 
	int y = 0; 
	int a;
	t_Grid *grid;

    *map = (t_map *)malloc(sizeof(t_map) * 5000); 
	if (*map == NULL)
    {
        ft_putstr("Memory allocation error.\n");
        exit(1);
    }

    int bytes_read;
	close(fd);
	fd = open(path, O_RDONLY);
	a = char_count(fd);
	close(fd);
	fd = open(path, O_RDONLY);
    while ((bytes_read = read(fd, &ch, 1)) > 0)
    {
        if (ch == '\n')
        {
            x++;
            y = 0;
            continue; 
		}
        else if (ch != '\0')
        {
            if (x > 0)
            {
                (*map)[current_index].x = x - 1;
                (*map)[current_index].y = y;
                (*map)[current_index].c = ch;
                current_index++;
                y++;
            }
        }
    }
	y = a / x;
	grid = (t_Grid *)malloc(sizeof(t_Grid) * x * y);
	grid = ft_first_line(buf);
	grid->row = x - 1;
	grid->column = y;
	grid->map = (char**)malloc(grid->row * sizeof(char*));
	int i = 0;
	while (i < grid->row)
	{
        grid->map[i] = (char*)malloc(grid->column * sizeof(char));
		i++;
	}
	grid->result_map = (int**)malloc(grid->row * sizeof(char*));
	while (i < grid->row)
	{
        grid->result_map[i] = (int*)malloc(grid->column * sizeof(int));
		i++;
	}
	return (grid);
}

t_map	*ft_read_map(int fd, char *path, char *buf)
{
	t_map	*map;
	int		lines_count;

	lines_count = ft_count_lines(fd, path);
	if (lines_count <= 0)
	{
		ft_putstr("map error\n");
		close(fd);
		return (0);
	}
	map = (t_map *)malloc(lines_count * sizeof(t_map));
	if (map == 0)
	{
		ft_putstr("map error\n");
		close(fd);
		free(map);
		return (0);
	}
	ft_map(fd, path, buf, &map);
	return (map);
}
