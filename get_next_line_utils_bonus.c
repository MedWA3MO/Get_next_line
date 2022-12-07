/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouaamm <moouaamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:23:29 by moouaamm          #+#    #+#             */
/*   Updated: 2022/11/06 21:35:47 by moouaamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(char *s1)
{
	char	*str;
	size_t	a;
	size_t	i;

	i = 0;
	a = ft_strlen(s1);
	str = (char *) malloc(sizeof(char) * (a + 1));
	if (!str)
		return (NULL);
	while (i < a)
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	ft_strchr(char *s, char c)
{
	int	i;

	if (!s)
		return (-1);
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (-1);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*join;
	size_t	a;
	size_t	i;

	if (!s1)
		s1 = ft_strdup("");
	if (!s2)
		return (NULL);
	a = ft_strlen(s1);
	i = -1;
	join = (char *) malloc(sizeof(char) * (a + ft_strlen(s2) + 1));
	if (!join)
		return (NULL);
	while (++i < a)
		join[i] = s1[i];
	i = -1;
	while (++i < ft_strlen(s2))
		join[i + a] = s2[i];
	free(s1);
	s1 = NULL;
	join[i + a] = '\0';
	return (join);
}
