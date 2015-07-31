/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboukra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/10 11:03:15 by maboukra          #+#    #+#             */
/*   Updated: 2015/07/21 22:19:23 by mbouhier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	if (nb > 2147483647 || nb < -2147483647)
		return ;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb == 0)
		ft_putchar('0');
	if (nb / 10 != 0)
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + '0');
}
