/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaccaro <svaccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:53:29 by svaccaro          #+#    #+#             */
/*   Updated: 2023/09/21 17:02:52 by svaccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

int main(int argc, char const *argv[])
{
	printf("isalpha: %i", isalpha('a'));
	printf("isalpha: %i", isalpha('A'));
	printf("isalpha: %i", isalpha('9'));
	printf("isalpha: %i", isalpha('-'));
	printf("ft_isalpha: %i");
	return 0;
}

