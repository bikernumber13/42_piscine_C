/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/30 22:30:08 by mbouhier          #+#    #+#             */
/*   Updated: 2015/07/31 10:12:59 by mbouhier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char		swap_bits(unsigned char octet)
{
	int i;
	int j;
	int k;
	char str[8];

	i = 0;
	j = 128;
	k = 4;
	while (i < 8)
	{
		if ((octet / j) == 0)
			str[i] = '0';
		else
			octet = octet % j, str[i] = '1';
		printf("%c", str[i]);
		i++, j = j / 2;
	}
	printf("\n");
	while (k > 0)
	{
		octet = octet + (str[i - k] * j);
		j = j / 2;
		printf("%c", str[i - k]);
		k--;
	}
	while (i > 4)
	{
		octet = octet + (str[8 - i] * j);
		j = j / 2;
		printf("%c", str[8 - i]);
		i--;
	}
	return (octet);
}
