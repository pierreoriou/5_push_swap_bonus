/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: poriou <poriou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 09:38:29 by poriou            #+#    #+#             */
/*   Updated: 2024/02/06 15:29:27 by poriou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	gl_strlen(char *s)
{
	size_t	len;

	len = 0;
	if (!s)
		return (0);
	while (s[len])
		len++;
	return (len);
}

char	*gl_strdup(char *s)
{
	size_t	i;
	size_t	len;
	char	*dup;

	len = gl_strlen(s);
	dup = (char *)malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char	*gl_strjoin(char *s1, char *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;
	char	*new_str;

	i = 0;
	s1_len = gl_strlen(s1);
	s2_len = gl_strlen(s2);
	new_str = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!new_str)
		return (NULL);
	while (s1[i])
	{
		new_str[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		new_str[s1_len + i] = s2[i];
		i++;
	}
	new_str[s1_len + i] = '\0';
	return (new_str);
}

char	*gl_substr(char *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*new_str;

	s_len = gl_strlen(s);
	if (start > s_len)
	{
		new_str = (char *)malloc(sizeof(char) * 1);
		if (!new_str)
			return (new_str);
		new_str[0] = '\0';
		return (new_str);
	}
	if (len > s_len - start)
		len = s_len - start;
	new_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!new_str)
		return (NULL);
	new_str[len] = '\0';
	while (s[start] && len > 0)
	{
		len--;
		new_str[len] = s[start + len];
	}
	return (new_str);
}

char	*gl_strchr(char *s, int c)
{
	size_t	i;

	i = 0;
	if ((char)c == 0)
		return (s);
	while (s[i])
	{
		if (s[i] == (char)c)
			return (s + i);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*str;
	char	*s1;
	char	*s2;
	char	*s3;

	str = "bonjour";
	s1 = "Hello ";
	s2 = "Pierre !";
	s3 = "bonjour comment ca va ?";
	//printf("res dup: <%s>\n", gl_strdup(str));
	//printf("res join: <%s>\n", gl_strjoin(s1, s2));
	printf("res substr: <%s>\n", gl_substr(s3, 8, 15));
	//printf("res strchr: <%s>\n", gl_strchr(s3, 99));
	return (0);
}*/
