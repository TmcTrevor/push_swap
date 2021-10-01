/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libutil_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhames <mokhames@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 14:53:44 by mokhames          #+#    #+#             */
/*   Updated: 2021/09/27 13:04:59 by mokhames         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

static	void	*ft_bzerox(void *p, size_t n)
{
	size_t		i;
	char		*s;

	i = 0;
	s = (char *)p;
	while (i < n)
	{
		s[i] = 0;
		i++;
	}
	return (p);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	int		i;

	i = 0;
	p = malloc(count * size);
	if (!(p))
		return (0);
	ft_bzerox(p, count * size);
	return (p);
}

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*e;

	i = 0;
	e = (char *)s;
	while (*e != c)
	{
		if (*e == '\0')
			return (NULL);
		e++;
	}
	return (e);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	while (src[i] != '\0')
		i++;
	dest = (char *)malloc((i + 1) * sizeof(char));
	if (!dest)
		return (0);
	ft_strcpy(dest, src);
	return (dest);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*p;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	p = (char *)malloc((i + j + 1) * sizeof(char));
	if (!p)
		return (NULL);
	ft_strcpy(p, s1);
	ft_strcpy(p + i, s2);
	p[i + j] = '\0';
	return (p);
}
