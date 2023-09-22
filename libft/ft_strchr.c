/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaccaro <svaccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:32:45 by svaccaro          #+#    #+#             */
/*   Updated: 2023/09/22 17:21:42 by svaccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	char	cc;

	cc = (char)c;
	ptr = (char *)s;
	while (*ptr)
	{
		if (*ptr == cc)
			return (ptr);
		ptr++;
	}
	if (cc == '\0')
		return (ptr);
	return (0);
}

/*int	main(void)
{
	char	*c;
	char	*c1;

	c = strchr("Hola mundo", 108);
	c1 = ft_strchr("Hola mundo", 108);
	printf("strchr: %s\n", c);
	printf("ft_strchr: %s\n", c1);
}
*/