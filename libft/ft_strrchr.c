/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaccaro <svaccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:34:55 by svaccaro          #+#    #+#             */
/*   Updated: 2023/10/16 16:11:29 by svaccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				slen;
	char			*ptr;
	unsigned char	cc;

	slen = (int)ft_strlen(s) - 1;
	cc = (char)c;
	ptr = (char *)s;
	if (cc == '\0')
		return (ptr + slen + 1);
	while (slen >= 0 && *(ptr + slen))
	{
		if (*(ptr + slen) == cc)
			return (ptr + slen);
		slen--;
	}
	return (NULL);
}
