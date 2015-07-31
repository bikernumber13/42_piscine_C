/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/29 12:29:44 by mbouhier          #+#    #+#             */
/*   Updated: 2015/07/29 14:29:05 by mbouhier         ###   ########.fr       */
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
		while(av[1][i])
		{
		if ((av[1][i] >= 'a' && av[1][i] <= 'm') ||
			(av[1][i] >= 'A' && av[1][i] <= 'M'))
			av[1][i] += 13, ft_putchar(av[1][i++]);
		else if ((av[1][i] >= 'n' && av[1][i] <= 'z') ||
			(av[1][i] >= 'N' && av[1][i] <= 'Z'))
			av[1][i] -= 13, ft_putchar(av[1][i++]);
		else
			ft_putchar(av[1][i++]);
		}
	}
	ft_putchar('\n');
	return (0);
}
