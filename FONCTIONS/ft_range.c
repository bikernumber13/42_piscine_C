/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/16 15:52:18 by gmarguer          #+#    #+#             */
/*   Updated: 2015/07/16 16:43:04 by gmarguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*array;
	int		i;

	i = 0;
	if (min >= max)
		return (0);
	array = (int*)malloc(sizeof(*array) * (max - min));
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
