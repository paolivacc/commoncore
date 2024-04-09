/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaccaro <svaccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 20:55:43 by svaccaro          #+#    #+#             */
/*   Updated: 2024/04/08 21:00:35 by svaccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "pipex_utils.h"

int main(int argc, char const **argv, char **envp)
{
	int	fd[2];
	pid_t	pid1;
	pid_t pid2;
	
	check_arguments();

	if (pipe(fd) == -1)
	{
		perror("error creating pipe");
		return (1);
	}
	//fork devuelve 0 para el proceso hijo, y el id del hijo al proceso padre -1 si error
	pid1 = fork();
	if(pid1 < 0)
	{
		perror("error creating the child proces");
		return (1);	
	}
	if(pid1 == 0)
	{							
		dup2(fd[1], STDOUT_FILENO);
		execve();
	}
	
	if (argc != 5)
	{
		ft_putstr_fd("ERROR: The number of arguments is not enough\n", 1);
		ft_putstr_fd("Try with the stdin format <./pipex archivo1 comando1 comando2 archivo2>", 1);
	}	
	else
	{
		fork();
	}
	return 0;
}

/*
chequear que el primer comando ingresado sea un archivo
chequear que el último comando ingresado sea un archivo

*/