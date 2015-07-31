/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/29 14:34:58 by mbouhier          #+#    #+#             */
/*   Updated: 2015/07/29 14:53:59 by mbouhier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

int		main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac ==2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				av[1][i] = 'z' - (av[1][i] - 'a'), i++;
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				av[1][i] = 'Z' - (av[1][i] - 'A'), i++;
			else
				i++;
		}
		ft_putstr(av[1]);
	}
	ft_putchar('\n');
	return (0);
}
