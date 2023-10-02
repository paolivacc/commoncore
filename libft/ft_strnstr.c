/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaccaro <svaccaro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:09:04 by svaccaro          #+#    #+#             */
/*   Updated: 2023/10/02 15:08:33 by svaccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	length;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	j = 0;
	length = ft_strlen(needle);
	while (i < len && *(haystack + i) && *(needle + j))
	{
		if (*(haystack + i) != *(needle + j))
			j = 0;
		if (*(haystack + i) == *(needle + j))
			j++;
		++i;
	}
	if (j == length && needle[j] == '\0')
		return ((char *)haystack + i - j);
	return (0);
}
