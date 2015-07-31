/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parchimb <parchimb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/20 19:40:50 by parchimb          #+#    #+#             */
/*   Updated: 2015/07/26 14:19:45 by mbouhier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_count_words(char *str)
{
	int count;
	int on;

	count = 0;
	on = 0;
	while (*str != '\0')
	{
		if ((*str == ' ' || *str == '\t' || *str == '\n') && on)
		{
			count++;
			on = 0;
		}
		else if (*str != ' ' && *str != '\t' && *str != '\n')
			on = 1;
		str++;
	}
	if (!on)
		count--;
	return (count);
}

char	*ft_first_word(char **str)
{
	char	*result;
	char	*origin;
	int		i;

	origin = *str;
	i = 0;
	while (*origin == ' ' || *origin == '\t' || *origin == '\n')
		origin++;
	while (origin[i] != ' ' && (origin[i] != '\t'
			&& origin[i] != '\n' && origin[i]))
		i++;
	result = (char*)malloc(sizeof(*result) * (i + 1));
	if (!result)
		return (0);
	if (*(origin + i))
		*str = origin + i + 1;
	else
		*str = origin + i;
	result[i] = '\0';
	while (--i >= 0)
		result[i] = origin[i];
	return (result);
}

char	**ft_split_whitespaces(char *str)
{
	char	**result;
	int		i;

	i = 0;
	result = (char**)malloc(sizeof(*result) * (ft_count_words(str) + 1));
	while (*str != '\0')
	{
		result[i] = ft_first_word(&str);
		i++;
	}
	result[i] = 0;
	return (result);
}
