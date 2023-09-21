/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaccaro <svaccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:14:55 by svaccaro          #+#    #+#             */
/*   Updated: 2023/09/21 17:04:18 by svaccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isprint (int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}

int main(int argc, char const *argv[])
{
	printf("isprint");
	printf("ft_isprint");
	return 0;
}

