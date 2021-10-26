#include <stdio.h>
#include <string.h>

void * ft_memcpy(void *dest, const void *src, size_t size)
{
	int i;
	i = 0;
	while (i < size)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return(dest);
}

/*void * ft_memcpy(void *dest, const void *src, size_t size)
{
	size_t i;
	if (dest != src)
	{
		i = 0;
		while (i < size)
		{
			*((char *) dest + i) = *((char *) src + i);
			i++;
		}
	}
	return(dest);
}*/


int main()
{
	char src[] = "GeeksForGeeks";
	char dest[] = "Program";
	//char b[] = {'P','r','o','g','r','a','m','\0'};

	printf("%s\n",ft_memcpy(dest,src,14));
	printf("%s\n",memcpy(dest,src,14));

	return 0;
}
