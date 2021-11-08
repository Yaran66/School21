/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:49:34 by wjasmine          #+#    #+#             */
/*   Updated: 2021/11/08 19:24:42 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != 0)
	{
		if (s[i] == ((char)c))
		{
			return (((char *)s) + i);
		}
		i++;
	}
	if (c == 0)
	{
		return (((char *)s) + i);
	}
	return (0);
}
