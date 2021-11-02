/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 19:13:37 by wjasmine          #+#    #+#             */
/*   Updated: 2021/10/26 20:18:02 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *block, int c, size_t size)
{
	while (size--)
	{
		((unsigned char *)block)[size] = (unsigned char)c;
	}
	return (block);
}
