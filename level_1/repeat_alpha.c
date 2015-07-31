/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 20i5/07/29 i2:ii:34 by mbouhier          #+#    #+#             */
/*   Updated: 2015/07/31 00:07:32 by mbouhier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(i, &c, i);
}

int		main(int ac, char **av)
{
	int i;
	int count;
	int colonne;

	i = 1;
	count = 0;
	colonne = 0;
	if (ac == 2)
	{
		while (av[i][colonne])
		{
			if (av[i][colonne] >= 'a' && av[i][colonne] <= 'z')
			{
				count = av[i][colonne] - 97;
			}
			else if (av[i][colonne] >= 'A' && av[i][colonne] <= 'Z')
			{
				count = av[i][colonne] - 65;
			}
			while (i > 0)
			{
				ft_putchar(av[i][colonne]);
				count--;
			}
			ft_putchar(av[i][colonne]);
			colonne++;
		}
	}
	ft_putchar('\n');
	return (0);
}
