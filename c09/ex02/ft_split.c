/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <asohrabi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:18:02 by asohrabi          #+#    #+#             */
/*   Updated: 2023/11/01 09:49:59 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

typedef struct s_shorten
{
	int		in_word;
	char	**array;
	int		index;
	char	*s;
	char	*word_start;
}			t_shorten;

int	is_char_in_string(char c, char *set)
{
	while (*set != '\0')
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

int	count_occur(char *str, char *charset)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*str != '\0')
	{
		if (is_char_in_string(*str, charset))
		{
			if (in_word == 1)
			{
				count++;
				in_word = 0;
			}
		}
		else
		{
			if (in_word == 0)
				in_word = 1;
		}
		str++;
	}
	if (in_word == 1)
		count++;
	return (count);
}

char	**in_word_con(int index, char **array, char *str, char *word_start)
{
	int		i;

	i = 0;
	array[index] = (char *)malloc((str - word_start + 1) * sizeof(char));
	i = 0;
	while (i < (str - word_start))
	{
		array[index][i] = word_start[i];
		i++;
	}
	array[index][str - word_start] = '\0';
	return (array);
}

t_shorten	first_con(char *str, char *charset)
{
	t_shorten	p;

	p = (t_shorten){0};
	p.s = str;
	p.array = (char **)malloc((count_occur(str, charset) + 1) * sizeof(char *));
	while (*p.s != '\0')
	{
		if (is_char_in_string(*p.s, charset))
		{
			if (p.in_word)
			{
				p.array = in_word_con(p.index, p.array, p.s, p.word_start);
				p.index++;
				p.in_word = 0;
			}
		}
		else if (!p.in_word)
		{
			p.in_word = 1;
			p.word_start = p.s;
		}
		p.s++;
	}
	return (p);
}

char	**ft_split(char *str, char *charset)
{
	t_shorten	p;

	p = first_con(str, charset);
	if (p.in_word)
	{
		p.array = in_word_con(p.index, p.array, p.s, p.word_start);
		p.index++;
	}
	p.array[p.index] = 0;
	return (p.array);
}
/*
int	main(void)
{
    char 	str[] = "hellow wowWrld!";
    char	**tokens;
	int		i;

	i = 0;
    tokens = ft_split(str, "wo");
    if (tokens)
    {
        int i = 0;
        while (tokens[i])
        {
            printf("%s\n", tokens[i]);
            i++;
        }
		while (tokens[i])
        {
            free(tokens[i]);
            i++;
        }
        free(tokens);
    }
    return (0);
}*/
