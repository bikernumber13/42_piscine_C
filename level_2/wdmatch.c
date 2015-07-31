/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/31 10:40:44 by mbouhier          #+#    #+#             */
/*   Updated: 2015/07/31 12:05:29 by mbouhier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int count;

	count = 0;
	while (str[count])
		ft_putchar(str[count++]);
}

int	main(int ac, char **av)
{
	int		colonne_1;
	int		colonne_2;

	colonne_1 = 0;
	colonne_2 = 0;
	if (ac == 3)
	{
		while (av[1][colonne_1] != '\0' || av[2][colonne_2])
		{
			if (av[1][colonne_1] == av[2][colonne_2])
			{
				colonne_1++, colonne_2++;
				if (av[1][colonne_1] == '\0')
					ft_putstr(av[1]);
			}
			else if (av[2][colonne_2 + 1] == '\0')
				break ;
			else
				colonne_2++;
		}
	}
	ft_putchar('\n');
	return (0);
}
