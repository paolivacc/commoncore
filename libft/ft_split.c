/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaccaro <svaccaro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:24:34 by svaccaro          #+#    #+#             */
/*   Updated: 2023/10/09 14:55:40 by svaccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	**ft_split(char const *s, char c)
{
	char	**strsplit;
	char	*strim;
	size_t	wcnt;
	size_t	ccnt;
	int		i;

	i = -1;
	ccnt = 0;
	wcnt = ft_wordcounter(s, c);
	strsplit = malloc(wcnt * sizeof(char *));
	strim = ft_strtrim(s, c);
	while (++i < wcnt)
	{
		while (*strim != c)
		{
			ccnt++;
			strim++;
		}
		*(strsplit + i) = malloc((ccnt + 1) * sizeof(char));
		ft_strcpy(strsplit + i, strim - ccnt, ccnt + 1);
		strim++;
	}
	return (strplit);
}*/