/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaccaro <svaccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:20:05 by svaccaro          #+#    #+#             */
/*   Updated: 2023/09/21 17:04:53 by svaccaro         ###   ########.fr       */
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

int main(int argc, char const *argv[])
{
	printf("strlen");
	printf("ft_strlen");
	return 0;
}

