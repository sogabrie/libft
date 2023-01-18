#ifndef LIBFT_H
#define LIBFT_H

#include "stdlib.h"

int ft_isalpha(int a );
int ft_isdigit(int a );
int ft_isalnum(int a );
int ft_isascii(int a );
int ft_isprint(int a );
size_t ft_strlen(const char *a);
unsigned char *ft_memset(unsigned char *a, int c, size_t len);
void ft_bzero(unsigned char *a, size_t s);
unsigned char *ft_memcpy(unsigned char * a,const unsigned char *b, size_t s);
unsigned char *ft_memmove(unsigned char *a, const unsigned char *b, size_t s);
size_t ft_strlcpy(char *dest, const char *src, size_t size);
size_t ft_strlcat(char *dest, const char *src, size_t size);
int ft_toupper(int a);
int ft_tolower(int a);
char *ft_strchr(const char *s, int c);

#endif
