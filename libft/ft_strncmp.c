/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaccaro <svaccaro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 16:27:16 by svaccaro          #+#    #+#             */
/*   Updated: 2023/09/29 16:45:05 by svaccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && *(s1 + i) && *(s2 + i) && *(s1 + i) == *(s2 + i))
	{
		i++;
	}
	if (n > i)
		return (*(s1 + i) - *(s2 + i));
	return(0);
}
