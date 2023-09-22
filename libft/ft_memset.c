/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaccaro <svaccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:23:30 by svaccaro          #+#    #+#             */
/*   Updated: 2023/09/22 16:57:52 by svaccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	while (len--)
		*((unsigned char *)(b + len)) = (unsigned char)c;
	return (b);
}

/*int	main(void)
{
	char	str[];
	char	ft_str[];

	str[] = "hello world";
	memset(str, 293, 13);
	printf("memset: %s\n", str);
	ft_str[] = "hello world";
	ft_memset(ft_str, 293, 13);
	printf("ft_memset: %s\n", ft_str);
}
*/