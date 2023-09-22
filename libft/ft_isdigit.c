/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaccaro <svaccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:13:38 by svaccaro          #+#    #+#             */
/*   Updated: 2023/09/22 16:54:44 by svaccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return ((c >= '0') && (c <= '9'));
}

/*int	main(int argc, char const *argv[])
{
	printf("isdigit");
	printf("ft_isdigit");
	return (0);
}
*/