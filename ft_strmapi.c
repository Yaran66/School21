/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:56:24 by wjasmine          #+#    #+#             */
/*   Updated: 2021/11/05 16:46:36 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*newstr;
	int		i;

	i = 0;
	if (s == 0 || f == 0)
		return (0);
	newstr = (char *)malloc (sizeof(char) * (ft_strlen (s) + 1));
	if (newstr == 0)
		return (0);
	while (s[i] != 0)
	{
		newstr[i] = f(i, s[i]);
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
