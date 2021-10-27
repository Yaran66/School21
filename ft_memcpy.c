/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 19:00:52 by wjasmine          #+#    #+#             */
/*   Updated: 2021/10/27 16:14:51 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	size_t	i;

	i = 0;
	if (dest != src)
	{
		while (i < size)
		{
			((char *) dest)[i] = ((char *) src)[i];
			i++;
		}
	}
	return (dest);
}

/*void * ft_memcpy(void *dest, const void *src, size_t size)
{
	size_t i;
	if (dest != src)
	{
		i = 0;
		while (i < size)
		{
			*((char *) dest + i) = *((char *) src + i);
			i++;
		}
	}
	return(dest);
}*/