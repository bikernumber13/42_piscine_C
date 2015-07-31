/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/29 11:36:12 by mbouhier          #+#    #+#             */
/*   Updated: 2015/07/29 11:39:42 by mbouhier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] == 32 && av[1][i] != '\0')
			i++;
		while (av[1][i] != 32 && av[1][i] != '\0')
			ft_putchar(av[1][i++]);
	}
	ft_putchar('\n');
	return (0);
}
