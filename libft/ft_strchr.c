/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaccaro <svaccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:32:45 by svaccaro          #+#    #+#             */
/*   Updated: 2023/09/29 16:24:19 by svaccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char			*ptr;
	unsigned char	cc;

	cc = (char)c;
	ptr = (char *)s;
	while (*ptr)
	{
		if (*ptr == cc)
			return (ptr);
		ptr++;
	}
	if (cc == '\0')
		return (ptr);
	return (0);
}
