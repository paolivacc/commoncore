/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaccaro <svaccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:24:34 by svaccaro          #+#    #+#             */
/*   Updated: 2023/10/19 16:02:57 by svaccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordcounter(const char *s, char c)
{
	size_t	cnt;
	size_t	i;

	i = 0;
	cnt = 0;
	while (*(s + i))
	{
		if ((*(s + i++) != c) && (*(s + i) == c || *(s + i) == '\0'))
			cnt++;
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
	while (s[i] == c)
		++i;
	substr = ft_substr(s, i, ft_strlen(s)-i);
	ssplit = (char **)malloc((wcnt + 1) * sizeof(char *));
	if (!ssplit)
		return (free(substr), NULL);
	i = 0;
	while (i < wcnt)
	{
		wlen = 0;
		while (substr[wlen] != c && substr[wlen] != '\0')
			wlen++;
		if (wlen > 0)
		{
			ssplit[i] = malloc((wlen + 1) * sizeof(char));
			if (!ssplit[i])
			{
				while (--i >= 0)
					free(ssplit[i]);
				free(ssplit);
				return (NULL);
			}
			ft_strlcpy(ssplit[i], substr, wlen + 1);
			i++;
		}
		substr = ft_substr(substr, wlen + 1, ft_strlen(substr) - wlen - 1);
	}
	free(substr);
	ssplit[i] = NULL;
	return (ssplit);
}

/*int main (void)
{
	int i = 0;
	char **tabstr;
	if (!(tabstr = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ')))
        printf("NULL");
    else
    {
        while (tabstr[i] != NULL)
        {
        	printf("%s\n", tabstr[i]);
            i++;
        }
    }
}
*/