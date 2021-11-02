/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 14:09:46 by wjasmine          #+#    #+#             */
/*   Updated: 2021/10/27 15:29:08 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (dst[i] != 0 && i < dstsize)
		i++;
	if (i >= dstsize)
		return (dstsize + ft_strlen(src));
	return (ft_strlen(dst) + ft_strlcpy(&dst[i], src, (dstsize - i)));
}
