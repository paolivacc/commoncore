/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaccaro <svaccaro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:57:39 by svaccaro          #+#    #+#             */
/*   Updated: 2023/10/11 13:09:55 by svaccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strjoin;
	size_t	strjoinlen;
	size_t	s1len;
	size_t	s2len;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	strjoinlen = s1len + s2len + 1;
	strjoin = malloc(strjoinlen * sizeof(char));
	if (strjoin == NULL)
		return (NULL);
	ft_strlcpy(strjoin, s1, s1len + 1);
	ft_strlcat(strjoin, s2, strjoinlen);
	return (strjoin);
}
