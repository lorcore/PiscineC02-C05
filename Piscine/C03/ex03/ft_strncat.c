/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurenpray <laurenpray@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 09:52:31 by laurenpray        #+#    #+#             */
/*   Updated: 2024/08/20 09:52:37 by laurenpray       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char			*temp;

	i = 0;
	if (nb == 0)
	{
		return (dest);
	}
	temp = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src && i < nb)
	{
		*dest = *src;
		src++;
		dest++;
		i++;
	}
	*dest = '\0';
	dest = temp;
	return (dest);
}

// int main()
// {
// 	char * a = "abc\0";

	
// 	char * b = "dio";
// 	unsigned int i = 2;

// }