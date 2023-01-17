#include <stdio.h>
#include "libft.h"

int main()
{
	int size = 1;

	for (int i = 0; i < size; ++i)
		printf("ft_isalpha = %d : i = %d = %c  \n", ft_isalpha(i), i, i);
	for (int i = 0; i < size; ++i)
		printf("ft_isdigit = %d : i = %d = %c\n",ft_isdigit(i), i, i);
	for (int i = 0; i < size; ++i)
		printf("ft_isalnum = %d : i = %d = %c\n",ft_isalnum(i), i, i);
	for (int i = 1; i < size; ++i)
		printf("ft_isascii = %d : i = %d = %c\n",ft_isascii(i), i, i);
	for (int i = 0; i < size; ++i)
		printf("ft_isprint = %d : i = %d = %c\n",ft_isprint(i), i, i);
	
	printf("strlen = %lu \n", ft_strlen("i"));

	char b[20] = "asdfxcvb";
	char a[20] = "llllllllll";
	ft_strlcpy(a, b, 5);
	for (int i = 0; i < 20; ++i)
		printf("i = %d a = %d \n",i, a[i]);

	return (0);
}
