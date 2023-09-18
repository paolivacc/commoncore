/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaccaro <svaccaro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:20:05 by svaccaro          #+#    #+#             */
/*   Updated: 2023/09/18 17:26:39 by svaccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t strlen(const char *s)
{
	int counter;
	
	counter = 0;
	while(s++)
		counter++;
	return (counter);
}
