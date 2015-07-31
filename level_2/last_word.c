/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/29 18:31:26 by mbouhier          #+#    #+#             */
/*   Updated: 2015/07/29 20:46:41 by mbouhier         ###   ########.fr       */
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
	int j;

	j = ac;
	i = 0;
	while (av[1][i] != '\0')
		i++;
	while (av[1][i - 1] == 32)
		i--;
	while (av[1][i - 1] != 32)
		i--;
	while (av[1][i] != 32 && av[1][i - 1] != '\0')
	{
		ft_putchar(av[1][i]);
		i++;
	}
	return (0);
}
