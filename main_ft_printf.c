/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaccaro <svaccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:22:18 by svaccaro          #+#    #+#             */
/*   Updated: 2023/11/30 22:23:08 by svaccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	ft_leaks(void)
{
	system("leaks a.out");
}

int main()
{
	int pf = printf("Printed by printf\n");	
	int	ftpf = ft_printf("This by ft_printf\n");
	printf ("Number of characters printed with printf: %i\n", pf);
	ft_printf ("Number or characters printed with ft_printf: %i\n", ftpf);
	
	pf = printf("Printed by printf: %s\n", "hola");
	ftpf = ft_printf("This by ft_printf: %s\n","hola");
	printf ("Number of characters printed with printf: %i\n", pf);
	ft_printf ("Number or characters printed with ft_printf: %i\n", ftpf);
	
	pf = printf("Printed by printf: %c\n", 'h');
	ftpf = ft_printf("This by ft_printf: %c\n",'h');
	printf ("Number of characters printed with printf: %i\n", pf);
	ft_printf ("Number or characters printed with ft_printf: %i\n", ftpf);
	
	pf = printf("Printed by printf: %i\n", 123456789);
	ftpf = ft_printf("This by ft_printf: %i\n", 123456789);
	printf ("Number of characters printed with printf: %i\n", pf);
	ft_printf ("Number or characters printed with ft_printf: %i\n", ftpf);
	
	pf = printf("Printed by printf: %u\n", 123456789);
	ftpf = ft_printf("This by ft_printf: %u\n", 123456789);
	printf ("Number of characters printed with printf: %i\n", pf);
	ft_printf ("Number or characters printed with ft_printf: %i\n", ftpf);
	
	pf = printf("Printed by printf: %s\n", NULL);
	ftpf = ft_printf("This by ft_printf: %s\n", NULL);
	printf ("Number of characters printed with printf: %i\n", pf);
	ft_printf ("Number or characters printed with ft_printf: %i\n", ftpf);
	
	pf = printf("Printed by printf: %%\n");
	ftpf = ft_printf("This by ft_printf: %%\n");
	printf ("Number of characters printed with printf: %i\n", pf);
	ft_printf ("Number or characters printed with ft_printf: %i\n", ftpf);
	//atexit(ft_leaks);
	return (0);
}
