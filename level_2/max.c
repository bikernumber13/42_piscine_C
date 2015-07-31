/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/30 17:25:08 by mbouhier          #+#    #+#             */
/*   Updated: 2015/07/30 17:33:44 by mbouhier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		max(int *tab, unsigned int len)
{
	int result;
	unsigned int i;

	result = 0;
	i = 0;
	if (!tab)
		return (result);
	else
	{
		while (i < len)
		{
			if (result < tab[i])
				result = tab[i];
			i++;
		}
	}
	return (result);
}
