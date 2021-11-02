/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 06:54:58 by wjasmine          #+#    #+#             */
/*   Updated: 2021/10/31 13:01:38 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *largestr, const char *smallstr, size_t n)
{
	size_t len;

	len = ft_strlen(smallstr);
	if (!*smallstr)
	{
		return((char *)largestr);
	}
	while (len < n--)
	{
		if (*largestr == 0)
		{
			return (0);
		}
		if  (*largestr == *smallstr)
		{
			if (!ft_strncmp(largestr, smallstr, len))
				return((char *)largestr);
		}
		largestr++;
	}
	return(0);
}
