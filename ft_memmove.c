#include <stdio.h>
#include <string.h>

/*void * ft_memmove(void *dest, const void *src, size_t size)
{
	int i;
	i = 0;
	char temp[size];
	while (i < size)
	{
		((char *)temp)[i] = ((char *)src)[i];
		i++;
	}
	i = 0;
	while (i < size)
	{
		((char *)dest)[i] = ((char *)temp)[i];
		i++;
	}
	return(dest);
}*/
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

void * ft_memmove(void *dest, const void *src, size_t size)
{
	if (dest < src)
	{
		ft_memcpy(dest, src, size);
	}
	else
	{
		while (size)
		{
			((char *)dest)[size] = ((char *)src)[size];
			size--;
		}
	}
	return(dest);
}


int main()
{
	char src[] = "Program";
	char dest[] = "GeeksForGeeks";
	//char b[] = {'P','r','o','g','r','a','m','\0'};

	printf("%s\n",ft_memmove(dest,src,5));
	printf("%s\n",memmove(dest,src,5));

	return 0;
}
