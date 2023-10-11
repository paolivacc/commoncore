/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaccaro <svaccaro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:19:33 by svaccaro          #+#    #+#             */
/*   Updated: 2023/10/11 10:33:37 by svaccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*strtrim;
	size_t	len;
	size_t	s1len;
	int		i;
	int		j;

	i = 0;
	s1len = ft_strlen(s1);
/*	if(!(*set == '\0' && *s1 == '\0'))
		return (NULL);*/
	len = s1len;
	while (*(s1 + i) && ft_strchr(set, *(s1 + i)))
	{
		i++;
		len--;
	}
	j = 0;
	while (*(s1 + s1len - 1 - j) && ft_strchr(set, *(s1 + s1len - 1 - j)))
	{
		j++;
		len--;
	}
	strtrim = malloc((len + 1) * sizeof(char));
	ft_strlcpy(strtrim, s1 + i, len + 1);
	return (strtrim);
}
