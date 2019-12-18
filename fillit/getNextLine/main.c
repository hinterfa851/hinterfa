
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nglynis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 21:02:58 by nglynis           #+#    #+#             */
/*   Updated: 2019/11/01 19:07:55 by nglynis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <sys/wait.h>

int	get_next_line(int fd, char **line);

int	main(int argc, char ** argv)
{
	int		fd1;
	int		fd2;
	int		cat1;
	int		cat2;
	char	*line1;
	char	*line2;
	pid_t	child;
	char	n = '\n';

	if (argc < 2)
	{
		printf("Usage %s <filename>\n", argv[0]);
		return (1);
	}
	fd1 = open(argv[1], O_RDONLY);
	fd2 = open(argv[2], O_RDONLY);
	while ((cat1 = get_next_line(fd1, &line1) > 0)
			|| ((cat2 = get_next_line(fd2, &line2)) > 0))
	{
		printf("%d:%s\n", fd1, line1);
		//printf("%d:%s\n", fd2, line2);
		free(line1);
	}
		/* free(line); */
	/* printf("gnl:%d\n",cat); */
	return (0);
}

