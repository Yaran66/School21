#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9')||(c >= 'a' && c <= 'z') || (c >= 'A' && c <=
	'Z'))
		return (1);
	return (0);
}

int main (void)
{
	char c;
	c = '9';
	printf("%d\n", ft_isalnum(c));
	printf("%d\n", isalnum(c));
	return (0);
}