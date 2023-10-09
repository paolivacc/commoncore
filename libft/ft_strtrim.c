/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaccaro <svaccaro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:19:33 by svaccaro          #+#    #+#             */
/*   Updated: 2023/10/04 17:44:57 by svaccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*strtrim;
	size_t	s1len;
	int	i;

	i = 0;
	while(*(s1 + i) && ft_strchr(set, *(s1 + i)))
		i++;
	
















	lens1 = ft_strlen(s1);
	lenset = ft_strlen(set); 
	strtrim = malloc(sizeof());
	while (lenset)
	{
		while (ft_strchr(s1, set + lenset))
			
	}
	return (strtrim);
}
