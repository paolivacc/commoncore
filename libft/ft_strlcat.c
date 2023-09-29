/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaccaro <svaccaro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 00:53:38 by svaccaro          #+#    #+#             */
/*   Updated: 2023/09/29 13:17:13 by svaccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dstlen;

	i = 0;
	dstlen = ft_strlen(dst);
	if (dstsize <= dstlen)
		return (ft_strlen(src) + dstsize);
	while (src[i] && i < dstsize - dstlen - 1)
	{
		dst[dstlen + i] = src[i];
		++i;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + ft_strlen(src));
}

/*int main ()
{
	char dst[5] = "Hola";
	char src[20] = ", adios";
	int len = strlcat(dst, src, 6);
	
	char ft_dst[5] = "Hola";
	char ft_src[20] = ", adios";
	int ft_len = ft_strlcat(ft_dst, ft_src, 6);
	
	printf("La nueva cadena es: %s\nLa longitud es: %i\n", dst, len);
	printf("La nueva cadena_ft es: %s\nLa longitud_ft es: %i\n", ft_dst, ft_len);
	return (0);
}*/
