/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouhier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/14 09:24:30 by mbouhier          #+#    #+#             */
/*   Updated: 2015/07/15 11:55:42 by mbouhier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int k;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			k = i;
			while ((to_find[j] != '\0') && (str[k] != '\0') &&
					(to_find[j] != str[k]))
			{
				k++;
				j++;
			}
			if (to_find[j] == str[k])
				return (&str[i]);
		}
		else
			i++;
	}
	return (0);
}
