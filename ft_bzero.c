#include <stdio.h>
#include <string.h>

void *ft_memset(void *block, int c, size_t size)
{
	while (size--)
	{
		((unsigned char *)block)[size] = (unsigned char)c;
	}
	return(block);
}

void ft_bzero(void *block, size_t size)
{
	ft_memset(block, 0, size);
}


int main()
{
	char a[] = "Program";
	//char b[] = {'P','r','o','g','r','a','m','\0'};

	printf("%s\n",ft_memset(a,'f',5));
	printf("%s\n",memset(a,'f',5));
	printf("%s\n",ft_bzero(a,5));
	printf("%s\n",bzero(a,5));

	return 0;
}