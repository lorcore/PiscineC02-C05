/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurenpray <laurenpray@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 09:50:47 by laurenpray        #+#    #+#             */
/*   Updated: 2024/08/20 09:51:02 by laurenpray       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

// int main()
// {
// 	char * a = "abc";
// 	char * b = "abc";

// 	int i;

// 	i = ft_strcmp(a,b);
// 	printf("%d",i);
// }