/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/21 18:26:07 by mbouhier          #+#    #+#             */
/*   Updated: 2015/07/24 10:56:17 by mbouhier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int output;
	int sign;
	int position;

	output = 0;
	sign = 0;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			output = output * 10 + *str - '0';
			position = 1;
		}
		else if (position == 1)
			break ;
		else if (*str == '-' && !sign)
			sign = -1;
		else if (*str == '+' && !sign)
			sign = 1;
		else if (*str != ' ' || output || sign)
			break ;
		str++;
	}
	return (output * (sign ? sign : 1));
}
