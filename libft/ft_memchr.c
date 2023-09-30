/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaccaro <svaccaro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 12:13:02 by svaccaro          #+#    #+#             */
/*   Updated: 2023/09/30 14:52:32 by svaccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	cc;
	unsigned char	*ptr;

	cc = (unsigned char)c;
	ptr = (unsigned char *)s;
	while (n)
	{
		if (*ptr == cc)
			return (ptr);
		ptr++;
		n--;
	}
	if (cc == '\0' && n != 0)
		return (ptr);
	return (0);
}
