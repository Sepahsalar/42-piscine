/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 09:48:55 by asohrabi          #+#    #+#             */
/*   Updated: 2023/07/05 11:41:21 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h> */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	while (src[i] != '\0')
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
    char* value = strcat(str1, str2);
	char* value_ft = ft_strcat(str1, str2);
    printf("\n%s", value);
	printf("\n%s", value_ft);
}*/
