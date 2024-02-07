/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 10:07:14 by poriou            #+#    #+#             */
/*   Updated: 2024/02/06 16:14:02 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*parse_line(int fd, char *buf, char *saved)
{
	int		reading;
	char	*tmp;

	reading = 1;
	while (reading > 0)
	{
		reading = read(fd, buf, BUFFER_SIZE);
		if (reading < 0)
			return (NULL);
		if (reading == 0)
			break ;
		buf[reading] = '\0';
		if (!saved)
			saved = gl_strdup("");
		tmp = saved;
		saved = gl_strjoin(tmp, buf);
		free(tmp);
		if (gl_strchr(buf, '\n'))
			break ;
	}
	return (saved);
}

char	*extract_line(char *line)
{
	size_t	i;
	char	*tmp;

	i = 0;
	if (!line)
		return (NULL);
	while (line[i] != '\n' && line[i] != '\0')
		i++;
	tmp = gl_substr(line, i + 1, gl_strlen(line) - i);
	if (!tmp)
		return (NULL);
	if (tmp[0] == '\0')
	{
		free(tmp);
		return (NULL);
	}
	line[i + 1] = '\0';
	return (tmp);
}

char	*get_next_line(int fd)
{
	char		*line;
	char		*buf;
	static char	*saved;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	line = parse_line(fd, buf, saved);
	free(buf);
	if (!line)
		return (NULL);
	saved = extract_line(line);
	return (line);
}
/*
int	main(void)
{
	int		fd;
	char	*path1;
	char	*path2;
	char	*path3;
	char	*path4;
	char	*str;


	if (fd == -1)
	{
		perror("no file\n");
		return (EXIT_FAILURE);
	}
	fd = open("test1.txt", O_RDONLY);
	printf("<%s>", get_next_line(fd));
	close(fd);
	fd = open("test2.txt", O_RDONLY);
	printf("<%s>", get_next_line(fd));
	close(fd);
	fd = open("test3.txt", O_RDONLY);
	printf("<%s>", get_next_line(fd));
	close(fd);
	fd = open("test4.txt", O_RDONLY);
	printf("<%s>", get_next_line(fd));
	close(fd);
	fd = open("test4.txt", O_RDONLY);
	printf("<%s>", get_next_line(fd));
	close(fd);
	fd = open("test4.txt", O_RDONLY);
	printf("<%s>", get_next_line(fd));
	close(fd);
	fd = open("test4.txt", O_RDONLY);
	printf("<%s>", get_next_line(fd));
	close(fd);
	fd = open("test4.txt", O_RDONLY);
	printf("<%s>", get_next_line(fd));
	close(fd);
	return (0);
}*/
