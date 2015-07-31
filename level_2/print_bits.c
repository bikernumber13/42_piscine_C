/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/30 22:07:56 by mbouhier          #+#    #+#             */
/*   Updated: 2015/07/30 22:42:48 by mbouhier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (i < 8)
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	print_bites(unsigned char octet)
{
	int i;
	int j;
	char str[8];

	i = 0;
	j = 128;
	while (i < 8)
	{
		if ((octet / j) == 0)
			str[i] = '0';
		else
		{
			octet = octet % j;
			str[i] = '1';
		}
		i++;
		j = j / 2;
	}
	ft_putstr(str);
}
