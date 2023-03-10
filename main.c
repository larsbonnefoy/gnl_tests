/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbonnefo <lbonnefo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 13:03:06 by lbonnefo          #+#    #+#             */
/*   Updated: 2023/02/09 14:47:57 by lbonnefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "lbonnefo/get_next_line.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **arc)
{
	int fd1 = open("bash.txt", O_RDONLY);
	//int fd2 = open("sw.txt", O_RDONLY);
	//int fd3 = open("empty.txt", O_RDONLY);
	int line_to_read = 10;
	int i = 0;
	char *line;

	while (i < line_to_read)
	{
		line = get_next_line(fd1);	
		printf("%d:	%s", i, line);
		free(line);
		i++;
	}
//	system("leaks a.out");
	return (0);
}
