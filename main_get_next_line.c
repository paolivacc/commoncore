/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_get_next_line.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaccaro <svaccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:46:17 by svaccaro          #+#    #+#             */
/*   Updated: 2023/12/02 21:12:51 by svaccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>

int main(void)
{
	int	fd;
	char	*line;
	
	if (fd == -1)
	{
		ft_printf("Error opening file\n");
		return (1);
	}
	line = get_next_line(fd);
	while (line)
	{
		ft_printf("%s\n", line);
		free(line);
		line = get_next_line(fd);
	}
	free(line);
	close(fd);
	return (0);
}

