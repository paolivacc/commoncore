/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaccaro <svaccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:53:29 by svaccaro          #+#    #+#             */
/*   Updated: 2023/09/22 15:25:43 by svaccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

/*int main(int argc, char const *argv[])
{
	printf("isalpha: %i", isalpha('a'));
	printf("isalpha: %i", isalpha('A'));
	printf("isalpha: %i", isalpha('9'));
	printf("isalpha: %i", isalpha('-'));
	printf("ft_isalpha: %i");
	return (0);
}*/
