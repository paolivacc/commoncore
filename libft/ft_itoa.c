/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaccaro <svaccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:07:25 by svaccaro          #+#    #+#             */
/*   Updated: 2023/10/15 19:55:23 by svaccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_intlen(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
	{
		len++;
		n = -n;
	}
	while (n)
	{
		n = (n / 10);
		len++;
	}
	return (len);
}

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
