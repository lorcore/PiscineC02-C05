/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurenpray <laurenpray@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 09:55:57 by laurenpray        #+#    #+#             */
/*   Updated: 2024/08/20 09:55:58 by laurenpray       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	is_valid_base(char *base);
static void	convert_and_print(long nbr, char *base, int base_len);
int			ft_atoi(const char *str);

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	base_len = is_valid_base(base);
	if (base_len <= 1)
		return ;
	convert_and_print(nbr, base, base_len);
}

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	convert_and_print(long nbr, char *base, int base_len)
{
	if (nbr == -2147483647)
	{
		write(1, "-", 1);
		nbr = -(nbr / base_len);
		convert_and_print(-(nbr * base_len + (-2147483647 % base_len)), base,
			base_len);
		return ;
	}
	if (nbr < 0)
	{
		nbr = -nbr;
		write(1, "-", 1);
	}
	if (nbr >= base_len)
		convert_and_print(nbr / base_len, base, base_len);
	write(1, &base[nbr % base_len], 1);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}