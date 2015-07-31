/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/24 18:40:51 by exam              #+#    #+#             */
/*   Updated: 2015/07/25 16:46:11 by mbouhier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_atoi(char *str)
{
	int i;
	int nb;

	nb = 0;
	i = 0;
	while (str[i] != '-' && (str[i] <= '0' || str[i] > '9'))
		i++;
	if (str[i] == '-')
		return (-1);
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb);
}

char	*ft_itoa(int nbr, char *str)
{
	int i;
	int length;
	int temp;

	i = 0;
	length = 1;
	temp = nbr;
	while (temp >= 10)
	{
		temp /= 10;
		length++;
	}
	while (nbr >= 10)
	{
		str[length - i - 1] = (nbr % 10) + '0';
		nbr /= 10;
		i++;
	}
	str[0] = nbr + '0';
	str[length] = '\0';
	return (str);
}
