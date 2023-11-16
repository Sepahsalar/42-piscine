/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 17:58:08 by asohrabi          #+#    #+#             */
/*   Updated: 2023/07/11 12:32:01 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	output_length(int size, int total_length, int sep_length, char **str)
{
	int	i;

	i = 0;
	while (i < size)
	{
		total_length = total_length + ft_strlen(str[i]);
		if (i < size - 1)
			total_length = total_length + sep_length;
		i++;
	}
	return (total_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_length;
	int		i;
	int		j;
	char	*output;

	total_length = 0;
	i = 0;
	j = 0;
	total_length = output_length(size, total_length, ft_strlen(sep), strs);
	output = (char *)malloc((total_length + 1) * sizeof(char));
	if (output == 0)
		return (0);
	i = 0;
	while (i < size)
	{
		ft_strcpy(&output[j], strs[i]);
		j = j + ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(&output[j], sep);
			j = j + ft_strlen(sep);
		}
		i++;
	}
	return (output);
}
/*
int main(void)
{
	int size = 4;
	char *strs[] = {"Hello", "Test", "123", ":)"};
	char *sep = "*!<->?&";
	char *r = ft_strjoin(size, strs, sep);
	if (r != 0)
	{
		printf("%s\n", r);
		free(r);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}
}*/
