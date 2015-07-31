/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/29 14:54:24 by mbouhier          #+#    #+#             */
/*   Updated: 2015/07/29 17:28:47 by mbouhier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int position;
	int nb;
	int sign;

	sign = 0;
	nb = 0;
	position = 0;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			nb = nb * 10 + *str - '0';
			position = 1;
		}
		else if (position == 1)
			break ;
		else if (*str == '-' && !sign)
			sign = -1;
		else if (*str == '+' && !sign)
			sign = 1;
		else if (*str != ' ' || nb || sign)
			break ;
		str++;
	}
	return (nb * (sign ? sign : 1));
}
