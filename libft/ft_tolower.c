/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaccaro <svaccaro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:26:59 by svaccaro          #+#    #+#             */
/*   Updated: 2023/09/19 10:30:58 by svaccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define TOLOWER 32

int ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + TOLOWER;
	return (c);
}