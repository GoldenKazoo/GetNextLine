/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchagar <zchagar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:33:26 by zchagar           #+#    #+#             */
/*   Updated: 2024/06/27 16:37:43 by zchagar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int	main()
{
	int		fd;
	char 	*test;

	fd = open("big_line_no_nl", O_RDONLY);
	while (1)

	{
	test = get_next_line(fd);
	printf("%s", test);
	free(test);
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
	close(fd);
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
