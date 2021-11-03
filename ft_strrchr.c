/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:49:34 by wjasmine          #+#    #+#             */
/*   Updated: 2021/11/03 11:59:42 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen((char *)s);
	while (i >= 0)
	{
		if (s[i] == ((char)c))
		{
			return (((char *)s) + i);
		}
		i--;
	}
	return (0);
}

/*char    *ft_strrchr(const char *s, int c)
{
	char    *t;
	int     i;
	char    cc;
	cc = (char)c;
	t = (char *)s;
	i = ft_strlen(s);
	if (!t)
		return (NULL);
	if (!cc)
		return (t + i);
	while (i >= 0)
	{
		if (*(t + i) == cc)
			return (t + i);
		i--;
	}
	return (NULL);
}

char	*ft_strrchr(const char *s, int c)
{	char	*end_ptr;
	end_ptr = (char *)s + ft_strlen(s);
	while (end_ptr != s - 1)
	{
		if (*end_ptr == (char)c)
			return (end_ptr);
		--end_ptr;
	}
	return (NULL);}

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (s[i] != ((char)c) && i > 0)
		i--;
	if (s[i] == ((char)c))
		return ((char *)&s[i]);
	else
		return (NULL);
}*/
