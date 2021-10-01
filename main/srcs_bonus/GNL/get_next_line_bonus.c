/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhames <mokhames@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 17:21:58 by mokhames          #+#    #+#             */
/*   Updated: 2021/09/27 12:48:48 by mokhames         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/checker.h"

#define BUFFER_SIZE 10

static char	*read_save(char *save, char **line)
{
	char	*str;
	char	*tmp;

	str = NULL;
	if (save)
	{
		str = ft_strchr(save, '\n');
		if (str)
		{
			*str = '\0';
			*line = ft_strdup(save);
			ft_strcpy(save, ++str);
		}
		else
		{
			*line = ft_strdup(save);
			save = ft_calloc(1, 1);
			tmp = save;
			free(tmp);
		}
	}
	else
		*line = ft_calloc(1, 1);
	return (str);
}

static int	help(char **save, char **buff)
{
	free(*save);
	*save = NULL;
	free(*buff);
	return (0);
}

static void	help1(char **str, char **save)
{
	char	*tmp;

	**str = '\0';
	*str += 1;
	tmp = *save;
	*save = ft_strdup(*str);
	free(tmp);
}

int	get_next_line(int fd, char **line)
{
	static char	*save;
	char		*buff;
	int			size_read;
	char		*str;
	char		*tmp;

	if (fd < 0 || line == NULL || (read(fd, NULL, 0) != 0))
		return (-1);
	buff = malloc((BUFFER_SIZE + 1) * sizeof(char));
	str = read_save(save, line);
	while (!str)
	{
		size_read = read(fd, buff, BUFFER_SIZE);
		if (size_read == 0)
			return (help(&save, &buff));
		buff[size_read] = '\0';
		str = ft_strchr(buff, '\n');
		if (str)
			help1(&str, &save);
		tmp = *line;
		*line = ft_strjoin(*line, buff);
		free(tmp);
	}
	free(buff);
	return (1);
}
