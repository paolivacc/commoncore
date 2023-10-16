/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaccaro <svaccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:24:34 by svaccaro          #+#    #+#             */
/*   Updated: 2023/10/15 19:51:04 by svaccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordcounter(const char *s, char c)
{
	size_t	cnt;
	size_t	i;

	i = 0;
	cnt = 0;
	while (*(s + i) && *(s + i) == c)
		i++;
	while (*(s + i))
	{
		if (*(s + i) == c && *(s + i - 1) != c)
			cnt++;
		i++;
	}
	return (cnt);
}

char	**ft_split(char const *s, char c)
{
	char	**ssplit;
	char	*substr; 
	size_t	wcnt;
	size_t	wlen;
	size_t	i;
	
	wcnt = ft_wordcounter(s, c);
	i = 0;
	while (*(s + i) == c)
		++i;
	substr = ft_substr(s, i, ft_strlen(s)-i);
	ssplit = (char **)malloc(wcnt * sizeof(char *));
	if (!ssplit)
		return (NULL);
	i = 0;
	wlen = 0;
	while(i < wcnt)
	{
		wlen = 0;
		while(*substr != c)
		{
			++wlen;
			++substr;
		}
		*(ssplit + i) = malloc((wlen + 1) * sizeof(char));
		ft_strlcpy(*(ssplit + i), substr - wlen, wlen + 1);
		substr++;
		i++;
	}
	return (ssplit);
}
