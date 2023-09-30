/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaccaro <svaccaro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 16:59:37 by svaccaro          #+#    #+#             */
/*   Updated: 2023/09/30 17:33:30 by svaccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
	char	*ptr;

	ptr = malloc(sizeof(s1));
	if (s1 != NULL && ptr != NULL) 
		ft_strcpy(ptr, s1);
	return(ptr);
}
