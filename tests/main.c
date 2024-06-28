/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchagar <zchagar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:33:26 by zchagar           #+#    #+#             */
/*   Updated: 2024/06/28 16:57:06 by zchagar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include <stdio.h>

int	main()
{
	int		fd1;
	int		fd2;
	int		i;
	char 	*test;

	i = 0;
	fd1 = open("emiya.txt", O_RDONLY);
	fd2 = open("emiya.txt", O_RDONLY);
	while (1)

	{
		if(i % 2 == 0)
			test = get_next_line(fd1);
		else
			test = get_next_line(fd2);
	printf("%s", test);
	free(test);
	i++;
		if (!test)
			break ;
	}
	// printf("%s", test);
	// test = get_next_line(fd);
	// printf("%s", test);
	// test = get_next_line(fd);
	// printf("%s", test);
	// printf("%s", get_next_line(fd));
	// printf("%s", get_next_line(fd));
	// printf("%s", get_next_line(fd));
	// printf("%s", get_next_line(fd));
	// printf("%s", get_next_line(fd));
/*-------------------------------------*/
	//  printf("%s", get_next_line(fd));
	//  printf("%s", get_next_line(fd));
	//  printf("%s", get_next_line(fd));
	// free (test);
	close(fd1);
	close(fd2);
}

//   int    main(void)
// {
//     char *line;
//     char *name = "read_error.txt";
//     int fd = open(name, O_RDONLY);
//     line = get_next_line(fd);
//     printf("%s\n", line);
//     free(line);
//     line = get_next_line(fd);
//     printf("%s\n", line);
//     free(line);
//     line = get_next_line(10);
//     printf("%s\n", line);
//     free(line);
//     close(fd);
//     fd = open(name, O_RDONLY);
//     line = get_next_line(fd);
//     printf("%s\n", line);
//     free(line);
//     return (0);
// }
