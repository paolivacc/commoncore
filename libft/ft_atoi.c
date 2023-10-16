/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaccaro <svaccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 16:33:11 by svaccaro          #+#    #+#             */
/*   Updated: 2023/10/15 19:46:53 by svaccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	set_var(int *counter_sign, int *number, int *i)
{
	*counter_sign = 0;
	*number = 0;
	*i = 0;
}

static void	check_sign(const char *str, int *counter_sign, int *i)
{
	if (*(str + *i) == '-')
		++(*counter_sign);
	++(*i);
}

int	ft_atoi(const char *str)
{
	int	counter_sign;
	int	number;
	int	i;

	set_var(&counter_sign, &number, &i);
	while (*(str + i) == ' ' || ((*(str + i) >= 9) && (*(str + i) <= 13)))
		++i;
	while (*(str + i) == '-' || *(str + i) == '+' )
	{	
		++counter_sign;
		if (counter_sign > 1)
			return (0);
		check_sign(str, &counter_sign, &i);
	}
	while (*(str + i) >= '0' && *(str + i) <= '9')
	{
		number *= 10;
		number += *(str + i) - '0';
		++i;
	}
	if (counter_sign == 2)
		return (-number);
	return (number);
}
