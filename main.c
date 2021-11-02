/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 18:58:04 by wjasmine          #+#    #+#             */
/*   Updated: 2021/10/31 15:24:11 by wjasmine         ###   ########.fr       */
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
	//strlcpy
	/*void test(int size)
	{
		char string[] = "Hello there, Venus";
		char buffer[19];
		int r;
		int d;

		r = strlcpy(buffer,string,size);

		printf("Copied '%s' into '%s', length %d\n", string, buffer, r);

		d = ft_strlcpy(buffer,string,size);

		printf("Copied ft_strlcpy '%s' into '%s', length %d\n", string, buffer, r);
	}

	int main()
	{
		test(19);
		test(10);
		test(1);
		test(0);

		return(0);
	}
	// strchr
	int main()
	{
		char string[] = "you are sure?";
		char c = '\0';
		char *q =ft_strchr(string, c);
		char *p = strchr(string, c);
		if (q == NULL)
		{
			printf("Not Found!\n");
		} else
		{
			printf("Found!\n");

		}
		if (p == NULL)
		{
			printf("Not Found!\n");
		} else
		{
			printf("Found!\n");

		}
		return 0;
	}
	 //strrchr
	int main()
	{
		char string[] = "are you sure?";
		char c = 'a';
		char *q =ft_strrchr(string, c);
		char *p = strrchr(string, c);
		if (q == NULL)
		{
			printf("Not Found!\n");
		} else
		{
			printf("Found!\n");

		}
		if (p == NULL)
		{
			printf("Not Found!\n");
		} else
		{
			printf("Found!\n");

		}
		return 0;

	 // strncmp
	 int main()
	{
		char string1[] = "are #ou sure?";
		char string2[] = "are you sure?";
		int i;

		i = 5;

		printf("%d\n", strncmp(string1, string2, i));
		printf("%d\n", ft_strncmp(string1, string2, i));
		return 0;
	}

	 memchr
	 int main()
{
	char string[] = "you are sure?";
	char c = '\0';
	int n;
	n = 15;
	char *q =ft_memchr(string, c, n);
	char *p = memchr(string, c, n);
	if (q == NULL)
	{
		printf("Not Found!\n");
	} else
	{
		printf("Found!\n");

	}
	if (p == NULL)
	{
		printf("Not Found!\n");
	} else
	{
		printf("Found!\n");

	}
	return 0;
}
	 //memcmp
	 int main()
{
	char string1[] = "are 3ou sure?";
	char string2[] = "are you sure?";
	int i;

	i = 3;

	printf("%d\n", memcmp(string1, string2, i));
	printf("%d\n", ft_memcmp(string1, string2, i));
	return 0;
}
	 ft_atoi

int main(int argc, char **argv)
{
	(void) argc;
//    (void) argv;
//    char str[] = "   ---+--+1234ab567";
	printf("%d\n", atoi(argv[1]));
	printf("%d\n", ft_atoi(argv[1]));
//    printf("%d\n", ft_atoi(str));
	return(0);
}
	// strnstr

int main()
{
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar";
	size_t n;

	n = 11;
	//char *ptr =strnstr(largestring, smallstring, n);
	char *ptr1 =ft_strnstr(largestring, smallstring, n);

	/*if (ptr == NULL)
	{
		printf("Not Found!\n");
	} else
	{
		printf("Found!\n");

	}
	if (ptr1 == NULL)
	{
		printf("Not Found!\n");
	} else
	{
		printf("Found!\n");

	}
}
*/
