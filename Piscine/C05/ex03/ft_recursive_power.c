/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurenpray <laurenpray@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 09:58:38 by laurenpray        #+#    #+#             */
/*   Updated: 2024/08/20 09:58:39 by laurenpray       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_recursive_power(int nb, int power)
{
    if(power < 0)
    {
        return 0;
    }

    if(nb == 0 && power == 0)
    {
        return 1;
    }
    if(power == 0)
    {
        return 1;
    }

    return(nb*ft_recursive_power(nb,power -1));
}