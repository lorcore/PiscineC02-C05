/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurenpray <laurenpray@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 09:53:28 by laurenpray        #+#    #+#             */
/*   Updated: 2024/08/20 09:53:30 by laurenpray       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	func(char *src);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;
	unsigned int	j;

	dest_len = func(dest);
	src_len = func(src);
	if (size <= dest_len)
	{
		return (size + src_len);
	}
	i = dest_len;
	j = 0;
	while (i < size - 1 && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (src_len + dest_len);
}

unsigned int	func(char *src)
{
	int	i;

	i = 0;
	while (*src)
	{
		src++;
		i++;
	}
	return (i);
}