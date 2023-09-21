/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaccaro <svaccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:23:30 by svaccaro          #+#    #+#             */
/*   Updated: 2023/09/21 17:57:45 by svaccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memset(void *b, int c, size_t len)
{
	unsigned char uc;
	int i = 0;
	
	uc = (unsigned char)c;
	while(len--)
	{
		((unsigned char *)b)[i] = uc;
		i++;
	}
	((unsigned char *)b)[i] = uc;
	
	return (b);
}

#include <stdio.h>
int main ()
{
	char str[]="hello world";
	memset(str, 293, 13);
	printf("memset: %s\n", str);
	
	char ft_str[]="hello world";
	ft_memset(ft_str, 293, 13);
	printf("ft_memset: %s\n",ft_str);
}
