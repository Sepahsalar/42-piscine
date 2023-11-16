/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 21:38:08 by akovalev          #+#    #+#             */
/*   Updated: 2023/07/16 23:17:39 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_headers.h"

char	*ft_strdup(char	*str)
{
	int		len;
	char	*new_str;
	char	*src;
	char	*dest;

	len = ft_strlen(str) + 1;
	new_str = (char *)malloc(len);
	if (new_str != 0)
	{				
		src = str;
		dest = new_str;
		while (*src != '\0')
		{
			*dest = *src;
			src++;
			dest++;
		}
		*dest = '\0';
	}
	return (new_str);
}
