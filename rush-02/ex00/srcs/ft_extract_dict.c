/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extract_dict.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 10:21:31 by akovalev          #+#    #+#             */
/*   Updated: 2023/07/16 23:29:23 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_headers.h"

void	free_dictionary(t_dict *dict, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(dict[i].str);
		i++;
	}
	free(dict);
}

int	count_entries(int fd)
{
	char	buffer[5000];
	int		bytes_read;
	int		i;

	bytes_read = read(fd, buffer, 5000);
	i = 0;
	while (i < bytes_read)
			i++;
	return (i);
}

int	parse_line(char *line, t_dict *dict, int current_index)
{
	char	*colon_pos;
	char	number_string[5000];
	int		number;
	char	*letters;

	colon_pos = ft_strchr(line, ':');
	if (colon_pos != 0)
	{		
		ft_strncpy(number_string, line, colon_pos - line);
		number_string[colon_pos - line] = '\0';
		number = ft_atoi_new(number_string);
		while (*(colon_pos + 1) == ' ')
			colon_pos = colon_pos + 1;
		letters = ft_strdup(colon_pos + 1);
		dict[current_index].x = number;
		dict[current_index].str = letters;
		current_index++;
	}
	return (current_index);
}

void	parse_buffer(char *buffer, t_dict *dict)
{
	char	*line_start;
	char	*line_end;
	int		current_index;

	current_index = 0;
	line_start = buffer;
	line_end = ft_strchr(buffer, '\n');
	while (line_end != NULL)
	{
		*line_end = '\0';
		current_index = parse_line(line_start, dict, current_index);
		line_start = line_end + 1;
		line_end = ft_strchr(line_start, '\n');
	}
}

t_dict	*read_dictionary(int fd, int entry_count, char *buffer)
{
	t_dict	*dict;

	dict = malloc(entry_count * sizeof(t_dict));
	if (dict == 0)
	{
		write(2, "Memory allocation error\n", 24);
		close(fd);
		free_dictionary(dict, entry_count);
		return (NULL);
	}
	parse_buffer(buffer, dict);
	return (dict);
}
