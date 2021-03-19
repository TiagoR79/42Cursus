/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tribeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 12:24:51 by tribeiro          #+#    #+#             */
/*   Updated: 2021/03/19 14:33:19 by tribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int		ft_null(char **str, char **line)
{
	if ((*str)[0] == '\0')
	{
		free(*str);
		*line = ft_strdup("");
		return (0);
	}
	return (1);
}

int		ft_to_line(char **str, char **line)
{
	size_t	len;
	char	*tmp;

	len = 0;
	while ((*str)[len] != '\n' && (*str)[len] != '\0')
		len++;
	ft_null(str, line);
	if ((*str)[len] == '\0' || line == NULL)
	{
		*line = ft_strdup(*str);
		free(*str);
		*str = NULL;
		return (0);
	}
	else if ((*str)[len] == '\n')
	{
		*line = ft_substr(*str, 0, len);
		tmp = ft_strdup(&(*str)[len + 1]);
		free(*str);
		*str = tmp;
	}
	return (1);
}

void	to_name(char **str, char *buffer, int ret)
{
	char *tmp;

	buffer[ret] = '\0';
	if (*str == NULL)
		*str = ft_strdup(buffer);
	else
	{
		tmp = ft_strjoin(*str, buffer);
		free(*str);
		*str = tmp;
	}
}

int		get_next_line(int fd, char **line)
{
	int			ret;
	char		*buffer;
	static char	*static_string[MAX_SIZE];

	if (fd < 0 || fd == 1 || fd == 2 || fd >= MAX_SIZE || line == NULL
		|| read(fd, 0, 0) == -1 || BUFFER_SIZE <= 0)
		return (-1);
	buffer = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (buffer == NULL)
		return (-1);
	while ((ret = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		to_name(&static_string[fd], buffer, ret);
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	free(buffer);
	if (ret < 0)
		return (-1);
	if (ret == 0 && static_string[fd] == NULL)
	{
		*line = ft_strdup("");
		return (0);
	}
	return (ft_to_line(&static_string[fd], line));
}
