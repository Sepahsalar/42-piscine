/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 15:28:42 by asohrabi          #+#    #+#             */
/*   Updated: 2023/07/04 18:52:30 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h> */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

/*int    main(void)
{
    char* str1 = "a";
    char* str2 = "ab";
    int value = strcmp(str1, str2);
    int value_ft = ft_strcmp(str1, str2);
    printf("%d", value);
    printf("\n%d", value_ft);
}*/
