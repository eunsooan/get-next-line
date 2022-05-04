/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ean <ean@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 16:27:04 by ean               #+#    #+#             */
/*   Updated: 2022/03/04 11:05:39 by ean              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		++len;
	return (len);
}

char	*ft_strchr(const char *s, int c)
{
	char	ch;

	ch = c;
	while (*s)
	{
		if (*s == ch)
			return ((char *)s);
		++s;
	}
	if (*s == ch)
		return ((char *)s);
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*ret;
	char		*dst;
	const char	*src;

	if (!s1 || !s2)
		return (NULL);
	ret = (char *)malloc(sizeof(*ret) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!ret)
		return (NULL);
	dst = ret;
	src = s1;
	while (*src)
		*dst++ = *src++;
	src = s2;
	while (*src)
		*dst++ = *src++;
	*dst = '\0';
	return (ret);
}

char	*ft_strdup(const char *s1)
{
	char	*ret;
	char	*dst;

	if (!s1)
		return (NULL);
	ret = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!ret)
		return (NULL);
	dst = ret;
	while (*s1)
		*dst++ = *s1++;
	*dst = '\0';
	return (ret);
}
