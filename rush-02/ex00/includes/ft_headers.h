/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_headers.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 10:32:17 by asohrabi          #+#    #+#             */
/*   Updated: 2023/07/17 19:38:13 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADERS_H
# define FT_HEADERS_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct t_dict
{
	int		x;
	char	*str;
}			t_dict;

void					ft_putchar(char c);
void					ft_putstr(char *str);
char					*ft_strncpy(char *dest, char *src, unsigned int n);
int						ft_strlen(char *str);
char					*ft_strchr(char *str, int c);
int						ft_atoi_new(char *str);
char					*ft_strdup(char *str);
unsigned long long int	ft_atoi_error(char *str);
char					*ft_dict(t_dict *p, int num);
int						count_entries(int fd);
t_dict					*read_dictionary(int fd, int entryCount, char *buffer);
void					free_dictionary(t_dict *dict, int size);
int						ft_count_lines(int fd);
void					ft_cal(char	*str, t_dict *dict);

#endif
