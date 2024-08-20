/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurenpray <laurenpray@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 09:56:43 by laurenpray        #+#    #+#             */
/*   Updated: 2024/08/20 09:56:51 by laurenpray       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


int ft_iterative_factorial(int nb)
{
    if(nb <0)
    {
        return 0;
    }
    if(nb == 0 || nb ==1)
    {
        return 1;
    }

    int fact;
    fact = 1;
    while(nb>1)
    {
        fact = fact * nb;
        nb--;
    }
    return fact;
}