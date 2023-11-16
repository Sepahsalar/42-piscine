/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asohrabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:23:52 by asohrabi          #+#    #+#             */
/*   Updated: 2023/07/09 11:51:08 by asohrabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_error(void);
void	process_input(char *input);
int		ft_strlen(char *str);

int	main(int a, char **b)
{
	char	*c;

	if (a == 2)
	{
		c = b[1];
		if (c[0] == '\0' || ft_strlen(c) != 31)
			print_error();
		else
			process_input(c);
	}
	else
	{
		print_error();
	}
	return (0);
}
