/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/11 11:40:35 by mbouhier          #+#    #+#             */
/*   Updated: 2015/07/15 16:51:23 by mbouhier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int len;
	int		i;
	char	tmp;

	len = 0;
	i = 0;
	while (str[len])
	{
		len++;
	}
	while (i <= (len / 2))
	{
		tmp = str[len - 1];
		str[len - 1] = str[i];
		str[i] = tmp;
		i++;
	}
	return (str);
}
