/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 06:54:58 by wjasmine          #+#    #+#             */
/*   Updated: 2021/11/03 09:52:48 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *largestr, const char *smallstr, size_t n)
{
	size_t	len;

	len = ft_strlen(smallstr);
	if (!(*smallstr))
	{
		return ((char *)largestr);
	}
	while (len <= n--)
	{
		if (*largestr == 0)
		{
			return (0);
		}
		if (*largestr == *smallstr)
		{
			if (!ft_strncmp(largestr, smallstr, len))
				return ((char *)largestr);
		}
		largestr++;
	}
	return (0);
}

/*char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t nlen;

	nlen = ft_strlen(needle);
	if (nlen == 0)
		return ((char *)haystack);
	while (*haystack && len >= nlen)
	{
		len--;
		if (!ft_strncmp(haystack, needle, nlen))
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}*/