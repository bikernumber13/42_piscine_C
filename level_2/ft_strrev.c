/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/29 22:18:33 by mbouhier          #+#    #+#             */
/*   Updated: 2015/07/29 22:25:57 by mbouhier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrev(char *str)
{
	char tmp;
	int i;
	int len;

	i = 0;
	len = 0;
	while (str[len])
		len++;
	while (i < len)
	{
		tmp = str[len - 1];
		str[len - 1] = str[i];
		str[i] = tmp;
		i++;
		len--;
	}
	return (str);
}
