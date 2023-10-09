/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcounter.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaccaro <svaccaro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:27:11 by svaccaro          #+#    #+#             */
/*   Updated: 2023/10/04 14:23:37 by svaccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_wordcounter(const char *s, char c)
{
	size_t	cnt;
	size_t	i;

	i = 0;
	cnt = 0;
	while(*(s + i) && *(s + i) == c)
		i++;
	while (*(s + i))
	{
		if(*(s + i) == c && *(s + i - 1) != c)
			cnt++;
		i++;
	}
	return (cnt)
}
