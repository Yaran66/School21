#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int main (void)
{
	char a;
	a = 'f';
	printf("%d\n", ft_isalpha(a));
	printf("%d\n", isalpha(a));
	return (0);
}