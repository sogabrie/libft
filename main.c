#include <stdio.h>
#include "libft.h"
#include <fcntl.h>

char	fo1(unsigned int a, char b)
{
	return (b + a);
}

void	fo2(unsigned int i, char *mas)
{
	mas[i] += i;
	//return (mas);
}

int	fil(char *name)
{
	return (open(name, O_WRONLY));
}

void crat(void *a)
{
	printf("============%s\n",a);
}

void	*cr(void *a)
{
	char *b = malloc(10);
	printf("======CRCR===%s\n",a);
	b[0] = ((char *)a)[0];
	return (b);
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
	//char **st = ft_split("asd    dfg ewr tyu fgh cvb",' ');
	//int ii = 0;
	//if (st)
	//	while (st[ii])
	//		printf("split = %s\n",st[ii++]);
	printf("itoa = %s \n", ft_itoa(-4584));
	printf("strmapi = %s \n", ft_strmapi("aaaaaa", fo1));
	char aa[10] = "aaaaaa";
	ft_striteri(aa, &fo2);
	printf("striteri = %s \n", aa);
	ft_putchar_fd('t',fil("a1.txt"));
	ft_putstr_fd("aaaaaaaaa",fil("a2.txt"));
	ft_putendl_fd("aaaaaaaaaa",fil("a3.txt"));
	ft_putnbr_fd(2569, fil("a4.txt"));

	printf("\n\n\t\tBONUS\n\n");

	t_list *li = ft_lstnew("aaaaad");
	t_list *li2 = ft_lstnew("sssssd");
	ft_lstadd_front(&li, li2);
	ft_lstadd_back(&li, ft_lstnew("cccccd"));
	printf("lstsize = %d \n",ft_lstsize(li));
	printf("lstlast = %s \n",ft_lstlast(li)->content);
	ft_lstiter(li, crat);
	while (li)
	{
		printf("lstnew and lstadd and lstadd_b = %s \n",li->content);
		li = li->next;
	}
	char *amal = malloc(16);
	li2 = ft_lstnew(amal);
	ft_lstdelone(li2, free);
	amal = malloc(16);
	amal[0] = 'a';
	li2 = ft_lstnew(amal);
	amal = malloc(16);
	amal[0] = 'f';
	ft_lstadd_back(&li2,ft_lstnew(amal));
	t_list *am = ft_lstmap(li2, cr, free);
	ft_lstclear(&li2, free);
	ft_lstclear(&am, free);
	printf("===============================\n");
	char ** gf = ft_split("                  olol",' ');
    
	printf("\n split = %s\n",gf[0]);

	return (0);
}
