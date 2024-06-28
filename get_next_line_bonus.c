/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zchagar <zchagar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 10:39:36 by zchagar           #+#    #+#             */
/*   Updated: 2024/06/28 18:46:54 by zchagar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(char *string)
{
	size_t	i;

	i = 0;
	if (!string)
		return (i);
	while (string[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_extract_line(char *stash)
{
	char	*line;
	int		i;

	i = 0;
	while (stash[i] != '\n' && stash[i] != '\0')
		i++;
	line = ft_substr(stash, 0, i + 1);
	if (line == NULL)
		return (NULL);
	return (line);
}

char	*ft_crop_stash(char *stash)
{
	int		i;
	char	*new_stash;

	i = 0;
	while (stash[i] != '\n' && stash[i] != '\0')
	{
		i++;
	}
	new_stash = ft_substr(stash, i + 1, ft_strlen(stash) - i);
	if (stash == NULL)
	{
		return (NULL);
	}
	else
	{
		free(stash);
		return (new_stash);
	}
}

char	*ft_free_stash(char *stash, char *buffer)
{
	if (buffer)
		free(buffer);
	free(stash);
	stash = NULL;
	return (NULL);
}

char	*get_next_line(int fd)
{
	static char		*stash[1024];
	char			*line;
	char			*buffer;
	int				read_value;

	read_value = BUFFER_SIZE;
	buffer = malloc(sizeof(char) * BUFFER_SIZE + 1);
	while ((ft_strchr(stash[fd], '\n') == NULL) && (read_value == BUFFER_SIZE))
	{
		read_value = read(fd, buffer, BUFFER_SIZE);
		if (fd < 0 || read(fd, 0, 0) < 0 || BUFFER_SIZE <= 0 || read_value < 0
			|| (read_value == 0 && ft_strlen(stash[fd]) == 0))
		{
			stash[fd] = ft_free_stash(stash[fd], buffer);
			return (NULL);
		}
		buffer[read_value] = '\0';
		stash[fd] = ft_strjoin(stash[fd], buffer);
	}
	line = ft_extract_line(stash[fd]);
	stash[fd] = ft_crop_stash(stash[fd]);
	free(buffer);
	return (line);
}
