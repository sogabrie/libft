#ifndef LIBFT_H
#define LIBFT_H

#include "stdlib.h"

int ft_isalpha(int a );
int ft_isdigit(int a );
int ft_isalnum(int a );
int ft_isascii(int a );
int ft_isprint(int a );
size_t ft_strlen(const char *a);
void *ft_memset(void *a, int c, size_t len);
void ft_bzero(void *a, size_t s);
void *ft_memcpy(void * a, const void *b, size_t s);
void *ft_memmove(void *a, const void *b, size_t s);
size_t ft_strlcpy(void *a, const void *b, size_t s);
size_t ft_strlcat(char *a, const char *b, size_t s);

#endif
