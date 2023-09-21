/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaccaro <svaccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:13:38 by svaccaro          #+#    #+#             */
/*   Updated: 2023/09/21 17:03:09 by svaccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(int c)
{

	if (((c + '0') >= '0') && ((c + '0') <= '9'))
		return (1);
	return (0);
}

int main(int argc, char const *argv[])
{
	printf("isdigit");
	printf("ft_isdigit");
	return 0;
}
