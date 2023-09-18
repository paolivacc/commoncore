/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaccaro <svaccaro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:16:59 by svaccaro          #+#    #+#             */
/*   Updated: 2023/09/18 15:52:52 by svaccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int c);
int ft_isdigit(int c);

int ft_isalnum(int c)
{
	if (ft_isalpha(c) && ft_isdigit(c))
		return (1);
	return (0);
}
