/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/29 17:39:55 by mbouhier          #+#    #+#             */
/*   Updated: 2015/07/29 18:15:40 by mbouhier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


int		main(int ac, char **av)
{
	int nb;

	nb = 0;
	if (ac == 4)
	{
		if (av[2][0] == '+')
			nb = atoi(av[1]) + atoi(av[3]);
		else if (av[2][0] == '-')
			nb = atoi(av[1]) - atoi(av[3]);
		else if (av[2][0] == '*')
			nb = atoi(av[1]) * atoi(av[3]);
		else if (av[2][0] == '/')
			nb = atoi(av[1]) / atoi(av[3]);
		else if (av[2][0] == '%')
			nb = atoi(av[1]) % atoi(av[3]);
	}
	printf("%d", nb);
}
