#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <stdio.h>

int ft_isalpha(int a );
int ft_isdigit(int a );
int ft_isalnum(int a );
int ft_isascii(int a );
int ft_isprint(int a );
size_t ft_strlen(const char *a);
void *ft_memset(void *a, int c, size_t len);
void ft_bzero(void *a, size_t s);
void*ft_memcpy(void * a,const void *b, size_t s);
void *ft_memmove(void *a, const void *b, size_t s);
size_t ft_strlcpy(char *dest, const char *src, size_t size);
size_t ft_strlcat(char *dest, const char *src, size_t size);
int ft_toupper(int a);
int ft_tolower(int a);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);
void *ft_memchr(const void *s, int c, size_t);
int ft_memcmp(const void *s1, const void *s2, size_t n);
char *ft_strnstr(const char *big, const char *lit, size_t len);
int ft_atoi(const char *nptr);
void *ft_calloc(size_t nmemb, size_t size);
char *ft_strdup(const char *s);

#endif
