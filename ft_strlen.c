
#include <stdio.h>
#include <string.h>

int ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int main()
{
	char a[] = "Program";
	char b[] = {'P','r','o','g','r','a','m','\0'};

	printf("Length of string = %d\n", ft_strlen(a));
	printf("Length of string = %d\n", strlen(a));
	printf("Length of string = %d\n", ft_strlen(b));
	printf("Length of string = %d\n", strlen(b));
	return 0;
}
