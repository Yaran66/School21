/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:07:41 by wjasmine          #+#    #+#             */
/*   Updated: 2021/10/26 20:18:53 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*void *ft_memset(void *block, int c, size_t size)
{
	while (size--)
	{
		((unsigned char *)block)[size] = (unsigned char)c;
	}
	return(block);
}*/

void ft_bzero(void *block, size_t size)
{
	ft_memset(block, 0, size);
}
/*void ft_bzero(void *block, size_t size)
{
	while (size--)
	{
		((unsigned char *)block)[size] = 0;
	}
}*/
