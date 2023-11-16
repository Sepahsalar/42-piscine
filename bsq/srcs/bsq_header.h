/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_header.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnikifor <dnikifor@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 11:35:07 by dnikifor          #+#    #+#             */
/*   Updated: 2023/07/19 12:04:40 by dnikifor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_HEADER_H
# define BSQ_HEADER_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

typedef struct s_Grid
{
	int		row;
	int		column;
    char    c;
    int     line_num;
    char    empty;
	char	obs;
	char	filler;
	char	**map;
	int		**result_map;
}			t_Grid;

typedef struct SubsquatesInfo
{
	int	size_y;
	int	size_x;
	int	tmp_y;
	int	tmp_x;
}		t_SubsquaresInfo;

typedef struct s_map
{
	int		x;
	int		y;
	char	c;
	char    **map;
}			t_map;

int		ft_sqrt(int nb);
int		subsquares_check(t_Grid *grid, int y, int x, int flag);
void	number_fill(t_Grid *grid);
int		max_number(t_Grid *grid, int largest);
void	array_with_only_max(t_Grid *grid, int largest);
void	square_fill(t_Grid *grid, int i, int j, int num);
void	ft_core(t_Grid *grid);
int		flag_change(int flag, int *x);
void	square_expand(t_SubsquaresInfo *f, int *y, int *x, int *flag);
void	free_memory(t_Grid *grid);
char	*ft_strchr(char *str, char c);
int		ft_strlen(char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_atoi(char *str);
char	*ft_strndup(char *src, int n);
int		ft_strnlen(char *str, int max_len);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
void    ft_map(int fd, char *path, char *buf, t_map **map);
t_map	*ft_read_map(int fd, char *path, char *buf);
t_Grid	*parse_line(int fd, char *path, t_map **map, char *buf);
t_Grid	*ft_first_line(char *buf);

#endif