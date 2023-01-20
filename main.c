#include <stdio.h>
#include "libft.h"

char	fo1(unsigned int a, char b)
{
	return (b + a);
}

void	fo2(unsigned int i, char *mas)
{
	mas[i] += i;
	//return (mas);
}

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
	ft_strlcat(a, b, 5);
	for (int i = 0; i < 20; ++i)
		printf("i = %d a = %d \n",i, a[i]);

	int a1 = ft_toupper('a');
	printf("%c \n",a1);
	printf("%c \n",ft_tolower(a1));
	char *a2 = ft_strchr("asdfghj", 'i');
	printf("strchr = %c \n" , a2?*a2:'M');
	char *a3 = "aassas";
	a2 = ft_strrchr(a3,'s');
	printf("strrchr = %c  true = %d \n", *a2, (a2 == (a3 + 5)));
	printf("strncmp = %d \n", ft_strncmp("asdfghjkl","asadfghjkl", 9));
	a2 = ft_memchr(a3,'s',3);
	printf("memchr = %c  true = %d \n", *a2, (a2 == (a3 + 2)));
	printf("strstr = %s \n", ft_strnstr("asdfghjklzxcvbnmqw","hjk",15));
	printf("atoi = %d \n",ft_atoi("2147483647"));
	char *a4 = ft_calloc(10, 4);
	a4[9] = 49;
	for (int i = 0; i < 10;++i)
		printf("calloc = %c \n",a4[i]);
	char *a5 = ft_strdup("zsxdcfv");
	printf("strdup = %s \n",a5);
	printf("substr = %s \n", ft_substr("aaaaasdsdsdll",0,6));
	printf("strjoin = %s \n", ft_strjoin("aaa", "sss"));
	printf("strtrim = %s \n", ft_strtrim("aaasssfffdddssfsfsfaaa","sfa"));
	char **st = ft_split("asd    dfg ewr tyu fgh cvb",' ');
	int ii = 0;
	if (st)
		while (st[ii])
			printf("split = %s\n",st[ii++]);
	printf("itoa = %s \n", ft_itoa(-4584));
	printf("strmapi = %s \n", ft_strmapi("aaaaaa", fo1));
	char aa[10] = "aaaaaa";
	ft_striteri(aa, &fo2);
	printf("striteri = %s \n", aa);

	return (0);
}
