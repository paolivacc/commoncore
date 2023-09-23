/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaccaro <svaccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:53:05 by svaccaro          #+#    #+#             */
/*   Updated: 2023/09/23 16:45:46 by svaccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char s1[]= "";
	char s2[]= "";
	char s3[]= "adios";
	char s4[]= "adios";

	memcpy(s1, s3,3);
	ft_memcpy(s2, s4,3);
	printf("memcpy: %s\n", s1);
	printf("ft_memcpy: %s\n", s2);

	printf("bzero");
	printf("ft_bzero");
	printf("memcpy");
	printf("ft_memcpy");
	printf("memmove");
	printf("ft_memmove");
	printf("strlcpy");
	printf("ft_strlcpy");
	printf("strlcat");
	printf("ft_strlcat");
	printf("toupper");
	printf("ft_toupper");
	printf("tolower");
	printf("ft_tolower");
	printf("strchr");
	printf("ft_strchr");
	printf("strrchr");
	printf("ft_strrchr");
	printf("strncmp");
	printf("ft_strncmp");
	printf("memchr");
	printf("ft_memchr");
	printf("memcmp");
	printf("ft_memcmp");
	printf("strnstr");
	printf("ft_strnstr");
	printf("atoi");
	printf("ft_atoi");
	printf("calloc");
	printf("ft_calloc");
	printf("strdup");
	printf("ft_strdup");
	printf("");
	printf("ft_");
	printf("");
	printf("ft_");
	printf("");
	printf("ft_");
	printf("");
	printf("ft_");
	printf("");
	printf("ft_");
	printf("");
	printf("ft_");
	printf("");
	printf("ft_");
}
