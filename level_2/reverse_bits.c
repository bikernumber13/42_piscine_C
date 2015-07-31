/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/30 22:08:15 by mbouhier          #+#    #+#             */
/*   Updated: 2015/07/30 22:42:42 by mbouhier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
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
	while (i > 0)
	{
		octet = octet + (str[8 - i] * j);
		j = j * 2;
		i--;
	}
	return (octet);
}
