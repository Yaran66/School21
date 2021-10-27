/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:49:34 by wjasmine          #+#    #+#             */
/*   Updated: 2021/10/27 17:38:43 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t i;

	i = 0;
	while (*s)
	{
		if (s[i] == ((char)c)
		{
			return ((char *)s[i])
		}
		i++;
	}
	return (0);
}

/*char* my_strchr(const char*  s, char c)
{
	assert(s != NULL);
	while (*s)
	{
		if (*s == c)
			return s;
		else
			s++;
	}
	return NULL;
}*/

int main()
{
	char string[] = "you are sure?";
	char c = 'z';
	char *p =ft_strchr(string, c);
	if (p == NULL)
	{
		printf("Not Found!\n");
	}
	else
	{
		printf("Found!\n");

	}

	return 0;
