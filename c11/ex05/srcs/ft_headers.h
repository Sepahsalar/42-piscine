/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_headers.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 18:06:15 by asohrabi          #+#    #+#             */
/*   Updated: 2023/07/20 18:10:39 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADERS_H
# define FT_HEADERS_H

# include <unistd.h>

int		ft_add(int a, int b);
int		ft_minus(int a, int b);
int		ft_devide(int a, int b);
int		ft_multiply(int a, int b);
int		ft_modulo(int a, int b);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int		ft_atoi(char *str);

#endif
