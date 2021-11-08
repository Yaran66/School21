/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:43:39 by wjasmine          #+#    #+#             */
/*   Updated: 2021/11/08 19:24:42 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;

	if (s1 == 0 || set == 0)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}

/*	trim = malloc (sizeof(*s1) * (i + 2));
	if (trim == 0 || s1 == 0 )
		return (0);
	//if (i >= (int)ft_strlen(s1))
	//	return (trim);
	while (s1[j] != 0 && j < i)
	{
		trim[j] = s1[j];
		j++;
	}
	trim[i] = '\0';
	return (trim);

	trim = malloc ((i + 1));
	if (trim == 0)
		return (0);
	while (s1[j] != 0 && i)
	{
		trim[j] = s1[j];
		i--;
		j++;
	}
	trim[j] = '\0';
	return (trim);*/