/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaccaro <svaccaro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:10:27 by svaccaro          #+#    #+#             */
/*   Updated: 2023/10/02 15:28:21 by svaccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	substr = malloc((len + 1) * sizeof(char));
	if (substr == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (substr);
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}
