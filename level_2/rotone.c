/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/30 17:34:10 by mbouhier          #+#    #+#             */
/*   Updated: 2015/07/30 17:44:18 by mbouhier         ###   ########.fr       */
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
		while (av[1][i])
		{
			if ((av[1][i] >= 'a' && av[1][i] < 'z')
				|| (av[1][i] >= 'A' && av[1][i] < 'Z'))
				ft_putchar((av[1][i] + 1));
			else if (av[1][i] == 'z' || av[1][i] == 'Z')
				ft_putchar((av[1][i] - 25));
			else
				ft_putchar(av[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
