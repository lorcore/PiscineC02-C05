/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_strstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurenpray <laurenpray@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 09:52:58 by laurenpray        #+#    #+#             */
/*   Updated: 2024/08/20 09:53:05 by laurenpray       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*func(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	if (*to_find == '\0')
	{
		return (str);
	}
	return (func(str, to_find));
}

char	*func(char *str, char *to_find)
{
	char	*pattern;
	char	*start;

	while (*str)
	{
		pattern = to_find;
		start = str;
		while (*pattern && *str && *pattern == *str)
		{
			str++;
			pattern++;
		}
		if (*pattern == '\0')
		{
			return (start);
		}
		str = start + 1;
	}
	return (NULL);
}