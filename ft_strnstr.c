/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 06:54:58 by wjasmine          #+#    #+#             */
/*   Updated: 2021/11/09 15:46:10 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *largestr, const char *smallstr, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!smallstr[i])
		return ((char *)largestr);
	while (i < n && largestr[i])
	{
		j = 0;
		while (largestr[i + j] && smallstr[j] && largestr[i + j] == smallstr[j]
			&& i + j < n)
			j++;
		if (smallstr[j] == 0)
			return ((char *)(largestr + i));
		i++;
	}
	return (0);
}

/*char	*ft_strnstr(const char *big, const char *small, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!small[i])
		return ((char *) big);
	while (i < size && big[i])
	{
		j = 0;
		while (big[i + j] && small[j] && big[i + j] == small[j] && i + j < size)
			j++;
		if (!small[j])
			return ((char *)(big + i));
		i++;
	}
	return ((char *) NULL);
}*/
/*char	*ft_strnstr(const char *largestr, const char *smallstr, size_t n)
{
	size_t	len;

	len = ft_strlen(smallstr);
	if (*smallstr == '\0')
		return ((char *)largestr);
	while (len <= n-- && largestr)
	{
		if (*largestr == *smallstr)
		{
			if (!ft_strncmp(largestr, smallstr, len))
				return ((char *)largestr);
		}
		largestr++;
	}
	return (0);
}*/
