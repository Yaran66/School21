/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 09:43:42 by wjasmine          #+#    #+#             */
/*   Updated: 2021/11/08 15:04:10 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	size_of_nb(unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (n > 9)
	{
		i++;
		n = n / 10;
	}
	return (i + 1);
}

char	*ft_itoa(int n)
{
	unsigned int	sign;
	unsigned int	i;
	char			*str_nb;

	sign = 0;
	if (n < 0)
	{
		sign = 1;
		n = (unsigned int)(n * -1);
	}
	str_nb = (char *)malloc(sizeof(char) * (size_of_nb(n) + 1 + sign));
	if (str_nb == 0)
		return (0);
	i = (size_of_nb(n) + sign);
	str_nb[i] = '\0';
	while (i-- && n > 9)
	{
		str_nb[i] = n % 10 + '0';
		n = n / 10;
	}
	str_nb[i--] = n % 10 + '0';
	if (sign)
		str_nb[i] = '-';
	return (str_nb);
}
