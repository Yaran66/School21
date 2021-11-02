/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:49:34 by wjasmine          #+#    #+#             */
/*   Updated: 2021/10/31 07:53:57 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen((char *)s);
	while (i >= 0)
	{
		//if (c == 0)
			//return ((char *)s + i);
		if (s[i] == ((char)c))
		{
			return ((char *)s);
		}
		i--;
	}
	return (0);
}
int main()
{
	char string[] = "are you sure?";
	char c = 'a';
	char *q = ft_strrchr(string, c);
	char *p = strrchr(string, c);
	if (q == NULL)
	{
		printf("Not Found!\n");
	} else
	{
		printf("Found!\n");

	}
	if (p == NULL)
	{
		printf("Not Found!\n");
	} else
	{
		printf("Found!\n");

	}
	return 0;
}