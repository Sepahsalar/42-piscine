/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 11:14:36 by asohrabi          #+#    #+#             */
/*   Updated: 2023/07/05 11:41:47 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h> */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				len;

	i = 0;
	len = 0;
	while (dest[len] != '\0')
		len++;
	while (i < nb && (src[i] != '\0'))
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	dest[len] = '\0';
	return (dest);
}

/*int    main(void)
{
    char str1[30] = "test";
    char str2[30] = " 123";
    char* value = strncat(str1, str2, 2);
	char* value_ft = ft_strncat(str1, str2, 2);
    printf("\n%s", value);
	printf("\n%s", value_ft);
}*/
