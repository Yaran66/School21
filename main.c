/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 18:58:04 by wjasmine          #+#    #+#             */
/*   Updated: 2021/10/26 20:20:36 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
	//memcpy
	/*{
		char src[] = "GeeksForGeeks";
		char dest[] = "Program";
		//char b[] = {'P','r','o','g','r','a','m','\0'};

		printf("%s\n",ft_memcpy(dest,src,7));
		printf("%s\n",memcpy(dest,src,7));
	}
	//isalnum
	{
		char c;
		c = '9';
		printf("%d\n", ft_isalnum(c));
		printf("%d\n", isalnum(c));
	}

	//isalpha
	{
		char a;
		a = 'f';
		printf("%d\n", ft_isalpha(a));
		printf("%d\n", isalpha(a));
	}
	//isascii
	{
		char c;
		c = 's';
		printf("%d\n", ft_isascii(c));
		printf("%d\n", isascii(c));
	}
	//isdigit
	{
		char c;
		c = '5';
		printf("%d\n", ft_isdigit(c));
		printf("%d\n", isdigit(c));
	}
	//isprint
	{
		char c;
		c = '\n';
		printf("%d\n", ft_isprint(c));
		printf("%d\n", isprint(c));
	}
	//memmove
	{
		char src[] = "Program";
		char dest[] = "GeeksForGeeks";
		//char b[] = {'P','r','o','g','r','a','m','\0'};

		printf("%s\n",ft_memmove(dest,src,5));
		printf("%s\n",memmove(dest,src,5));

	}
	//memset
	{
		char a[] = "Program";
		//char b[] = {'P','r','o','g','r','a','m','\0'};

		printf("%s\n",ft_memset(a,'0',5));
		printf("%s\n",memset(a,'0',5));

	}
	//strlen
	{
		char a[8] = "Program";
		char b[8] = {'P','r','o','g','r','a','m','\0'};

		printf("Length of string = %zu\n", ft_strlen(a));
		printf("Length of string = %zu\n", strlen(a));
		printf("Length of string = %zu\n", ft_strlen(b));
		printf("Length of string = %zu\n", strlen(b));
	}*/
	//bzero
	{
		char a[] = "Program";
		//char b[] = {'P','r','o','g','r','a','m','\0'};

//		printf("%s\n",ft_memset(a,'f',5));
//		printf("%s\n",memset(a,'f',5));
		ft_bzero(a, 5);
		//printf("%s\n",ft_bzero(a,5));
		printf("%s\n",bzero(a,5));
		printf("%s\n",a);
	}
	return 0;
}