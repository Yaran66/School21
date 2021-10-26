#include <stdio.h>
#include <string.h>

void * ft_memset(void *block, int c, size_t size)
{
	while (size--)
	{
		((unsigned char *)block)[size] = (unsigned char)c;
	}
	return(block);
}

int main()
{
	char a[] = "Program";
	//char b[] = {'P','r','o','g','r','a','m','\0'};

	printf("%s\n",ft_memset(a,'0',5));
	printf("%s\n",memset(a,'0',5));

	return 0;
}
