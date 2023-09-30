/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaccaro <svaccaro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 16:33:11 by svaccaro          #+#    #+#             */
/*   Updated: 2023/09/30 14:54:22 by svaccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	counter_sign;
	int	number;
	int	i;
	int	neg;

	counter_sign = 0;
	number = 0;
	i = 0;
	neg = 0;
	while (*(str + i) == ' ' || ((*(str + i) >= 9) && (*(str + i) <= 13)))
		++i;
	while (*(str + i) == '-' || *(str + i) == '+' )
	{	
		++counter_sign;
		if (counter_sign > 1)
			return (0);
		if (*(str + i) == '-')
			++neg;
		++i;
	}
	while (*(str + i) >= '0' && *(str + i) <= '9')
	{
		number *= 10;
		number += *(str + i) - '0';
		++i;
	}
	if (neg)
		return (-number);
	return (number);
}
