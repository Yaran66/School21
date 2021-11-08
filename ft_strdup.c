/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:50:33 by wjasmine          #+#    #+#             */
/*   Updated: 2021/11/08 19:24:42 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	i;

	ptr = malloc (sizeof(*s1) * (ft_strlen(s1) + 1));
	i = 0;
	if (ptr == 0)
	{
		return (0);
	}
	while (s1[i] != 0)
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
