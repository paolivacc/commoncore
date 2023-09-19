/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaccaro <svaccaro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:17:16 by svaccaro          #+#    #+#             */
/*   Updated: 2023/09/19 10:31:15 by svaccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define TOUPPER 32

int ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - TOUPPER;
	return (c);
}
