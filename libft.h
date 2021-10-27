#ifndef LIBFT_H
# define LIBFT_H
#include <stdlib.h>
#include <ctype.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
size_t ft_strlen(const char *str);
void * ft_memset(void *block, int c, size_t size);
void ft_bzero(void *block, size_t size);
void * ft_memcpy(void *dest, const void *src, size_t size);
void * ft_memmove(void *dest, const void *src, size_t size);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t ft_strlcat(char *dst, const char *src, size_t dstsize);
#endif