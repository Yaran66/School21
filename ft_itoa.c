/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 09:43:42 by wjasmine          #+#    #+#             */
/*   Updated: 2021/11/09 15:27:23 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	size_of_nb(long int k)
{
	unsigned int	i;

	i = 0;
	while (k > 9)
	{
		i++;
		k = k / 10;
	}
	return (i + 1);
}

char	*convert_nbr_to_str(char *str_nb, unsigned int i, long long k,
							unsigned int sign)
{
	str_nb[i] = '\0';
	while (i-- && k > 9)
	{
		str_nb[i] = k % 10 + '0';
		k = k / 10;
	}
	str_nb[i--] = k % 10 + '0';
	if (sign)
		str_nb[i] = '-';
	return (str_nb);
}

char	*ft_itoa(int n)
{
	unsigned int	sign;
	unsigned int	i;
	char			*str_nb;
	long long		k;

	k = n;
	sign = 0;
	if (k < 0)
	{
		sign = 1;
		k = (((long long)(k)) * -1);
	}
	str_nb = (char *)malloc(sizeof(char) * (size_of_nb(k) + 1 + sign));
	if (str_nb == 0)
		return (0);
	i = (size_of_nb(k) + sign);
	str_nb = convert_nbr_to_str(str_nb, i, k, sign);
	return (str_nb);
}
