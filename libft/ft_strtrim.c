/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaccaro <svaccaro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:19:33 by svaccaro          #+#    #+#             */
/*   Updated: 2023/10/12 13:07:14 by svaccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*strtrim;
	size_t	s1len;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	s1len = ft_strlen(s1);
	while (i < s1len && ft_strchr(set, *(s1 + i)))
		i++;
	while (i + j < s1len && ft_strchr(set, *(s1 + s1len - 1 - j)))
		j++;
	strtrim = malloc((s1len - j - i + 1) * sizeof(char));
	if (!strtrim)
		return (NULL);
	if (s1len - j - i == 0)
		*strtrim = '\0';
	else
		ft_strlcpy(strtrim, s1 + i, s1len - j - i + 1);
	return (strtrim);
}
