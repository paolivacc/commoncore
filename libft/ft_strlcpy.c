/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaccaro <svaccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 17:40:27 by svaccaro          #+#    #+#             */
/*   Updated: 2023/09/24 00:55:58 by svaccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	return ();
}




















	size_t i;
	size_t length;

	i = 0;
	length = ft_strlen(src);
	while (i < dstsize - 1)
	{
		if (i > length)
			dst[i] = '\0';
		else
			dst[i] = src[i];
		i++;
	}
	return (length);
}
