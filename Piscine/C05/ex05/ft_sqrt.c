/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurenpray <laurenpray@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 09:59:43 by laurenpray        #+#    #+#             */
/*   Updated: 2024/08/20 09:59:48 by laurenpray       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int	ft_sqrt(int nb)
{
	int	low;
	int	high;
	int	mid;

	low = 0;
	high = nb;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (nb);
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (mid * mid == nb)
			return (mid);
		if (mid * mid < nb)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (0);
}

int main()
{
    int a;
    a = ft_sqrt(26);
    printf("%d",a);
}