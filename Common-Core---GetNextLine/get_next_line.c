/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sallawne <sallawne@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 09:39:51 by sallawne          #+#    #+#             */
/*   Updated: 2026/10/13 10:38:43 by sallawne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*read_chunks(int fd, char *stash, char *buffer)
{
	int		bytes;
	char	*join;

	bytes = 1;
	while (bytes > 0 && !ft_strchr(stash, '\n'))
	{
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes == -1)
		{
			free(stash);
			return (NULL);
		}
		if (bytes > 0)
		{
			buffer[bytes] = '\0';
			join = ft_strjoin(stash, buffer);
			free(stash);
			if (!join)
				return (NULL);
			stash = join;
		}
	}
	return (stash);
}

static char	*read_line(int fd, char *stash)
{
	char	*buffer;

	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
	{
		free(stash);
		return (NULL);
	}
	if (!stash)
	{
		stash = malloc(1);
		if (!stash)
		{
			free(buffer);
			return (NULL);
		}
		stash[0] = '\0';
	}
	stash = read_chunks(fd, stash, buffer);
	free(buffer);
	return (stash);
}

static char	*extract_line(char *stash)
{
	int		i;
	char	*line;
	int		k;

	i = 0;
	if (!stash || stash[0] == '\0')
		return (NULL);
	while (stash[i] && stash[i] != '\n')
		i++;
	if (stash[i] == '\n')
		i++;
	line = malloc(i + 1);
	if (!line)
		return (NULL);
	line[i] = '\0';
	k = 0;
	while (i > k)
	{
		line[k] = stash[k];
		k++;
	}
	return (line);
}

static char	*update_stash(char *stash)
{
	int		i;
	char	*new_stash;
	int		j;

	i = 0;
	while (stash[i] && stash[i] != '\n')
		i++;
	if (stash[i] == '\n')
		i++;
	new_stash = malloc(ft_strlen(stash) - i + 1);
	if (!new_stash)
		return (NULL);
	j = 0;
	while (stash[i])
	{
		new_stash[j] = stash[i];
		i++;
		j++;
	}
	new_stash[j] = '\0';
	free(stash);
	return (new_stash);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	stash = (read_line(fd, stash));
	if (!stash)
		return (NULL);
	line = extract_line(stash);
	if (!line)
	{
		free(stash);
		stash = NULL;
		return (NULL);
	}
	stash = update_stash(stash);
	return (line);
}
