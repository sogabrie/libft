#ifndef LIBFT_H
#define LIBFT_H

int ft_isalpha(int a );
int ft_isdigit(int a );
int ft_isalnum(int a );
int ft_isascii(int a );
int ft_isprint(int a );
unsigned long ft_strlen(const char *a);
void *ft_memset(void *a, int c, unsigned int len);
void ft_bzero(void *a, unsigned int s);
void *ft_memcpy(void * a, const void *b, unsigned int s);
void *ft_memmove(void *a, const void *b, unsigned int s);
unsigned int ft_strlcpy(void *a, const void *b, unsigned int s);
unsigned int ft_strcat(void *a, const void *b, unsigned int s);

#endif
