/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_get_next_line.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaccaro <svaccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 19:49:12 by svaccaro          #+#    #+#             */
/*   Updated: 2023/12/19 20:06:04 by svaccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "get_next_line.h"

void ft_l()
{
    system("leaks -q a.out");
}
int main()
{
    int fd;
    char *ret;

    // Abrir el archivo que deseas leer
    fd = open("test.txt", O_RDONLY);
    if (fd == -1) {
        perror("Error al abrir el archivo");
        return 1;
    }

    // Leer línea por línea hasta el final del archivo
    while ((ret = get_next_line(fd)) > 0) {
        printf("%s\n", ret);
        free(ret);
    }

    if (!ret) {
        perror("Error al leer el archivo");
        return 1;
    }

    // Cerrar el archivo
    close(fd);
    atexit(ft_l);
    return 0;
}
