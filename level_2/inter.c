/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/29 23:52:41 by mbouhier          #+#    #+#             */
/*   Updated: 2015/07/31 12:40:26 by mbouhier         ###   ########.fr       */
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
	int	i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	if (ac == 3)
	{
		while (av[1][i] != '\0')
		{
			while (av[2][j] != '\0')
			{
				if(av[1][i] == av[2][j])
				{
					k = 0;
					while (av[1][k])
					{
						if (av[1][i] == av[1][k] && k < i)
							break ;
						k++;
					}
					if (av[1][k] == '\0')
					{
						ft_putchar(av[1][i]);
						break ;
					}
				}
				j++;
			}
			j = 0, i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
