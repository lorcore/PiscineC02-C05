/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurenpray <laurenpray@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 09:58:56 by laurenpray        #+#    #+#             */
/*   Updated: 2024/08/20 09:59:09 by laurenpray       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


int ft_fibonacci(int index)
{
    if(index < 0)
    {
        return -1;
    }
    if(index < 2)
    {
        return index;
    }
    else
    {
        return(ft_fibonacci(index -1) + ft_fibonacci(index-2));
    }
}
