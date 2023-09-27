/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaccaro <svaccaro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 23:56:25 by svaccaro          #+#    #+#             */
/*   Updated: 2023/09/24 00:28:39 by svaccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (src < dst)
		ft_memcpy(dst, src, len);
	else
	{
		if (!dst && !src)
			return (0);
		while (i < len)
		{
			*((unsigned char *)(dst + i)) = *((unsigned char *)(src + i));
			++i;
		}
	}
	return (dst);
}
