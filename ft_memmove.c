/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 19:11:52 by wjasmine          #+#    #+#             */
/*   Updated: 2021/11/08 19:24:42 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	if (dest < src)
	{
		ft_memcpy(dest, src, size);
	}
	else if (dest > src)
	{
		while (size--)
		{
			((char *)dest)[size] = ((char *)src)[size];
		}
	}
	return (dest);
}

/*void    *ft_memmove(void *dst, const void *src, size_t len)
{
	const char  *s;
	char        *d;
	s = (const char *) src;
	d = (char *) dst;
	if (s < d)
	{
		s += len;
		d += len;
		while (len--)
			*--d = *--s;
	}
	else if (s > d)
		while (len--)
			*d++ = *s++;
	return (dst);
}
void * ft_memmove(void *dest, const void *src, size_t size)
{
	int i;
	i = 0;
	char temp[size];
	while (i < size)
	{
		((char *)temp)[i] = ((char *)src)[i];
		i++;
	}
	i = 0;
	while (i < size)
	{
		((char *)dest)[i] = ((char *)temp)[i];
		i++;
	}
	return(dest);
}*/
/*void * ft_memcpy(void *dest, const void *src, size_t size)
{
	size_t i;
	i = 0;
	while (i < size)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return(dest);
}*/