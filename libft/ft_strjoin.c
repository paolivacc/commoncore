/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaccaro <svaccaro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:57:39 by svaccaro          #+#    #+#             */
/*   Updated: 2023/10/02 17:09:53 by svaccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strjoin;
	size_t	strjoinlen;

	strjoinlen = ft_strlen(s1) + ft_strlen(s2) + 1;
	strjoin = malloc(strjoinlen * sizeof(char));
	if (strjoin == NULL)
		return (NULL);
	ft_strlcat(strjoin, s1, strjoinlen);
	ft_strlcat(strjoin, s2, strjoinlen);
	return (strjoin);
}
