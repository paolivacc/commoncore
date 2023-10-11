/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaccaro <svaccaro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:07:25 by svaccaro          #+#    #+#             */
/*   Updated: 2023/10/11 17:36:52 by svaccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		nlen;

	nlen = ft_intlen(n);
	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	str = malloc((nlen + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	*(str + nlen) = '\0';
	if (n == 0)
		str[0] = '0';
	while (n > 0)
	{
		str[--nlen] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}
