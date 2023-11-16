/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:09:55 by asohrabi          #+#    #+#             */
/*   Updated: 2023/07/04 19:59:35 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h> */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	if (s1[i] == '\0')
		return (s1[i] - s2[i]);
	else
	{
		while (i < n && s1[i] != '\0' && (s1[i] == s2[i]))
				i++;
		if (i == n)
			return (0);
	}
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	char* str1 = "test123t";
    char* str2 = "test120asd";
    int value = strncmp(str1, str2, 6);
	int value_ft = ft_strncmp(str1, str2, 6);
	printf("%d", value);
	printf("\n%d", value_ft);
}*/
