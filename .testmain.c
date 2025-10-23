#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>
#include "../libft/libft.h"

void print_nums(const int *arr, int size)
{
    printf("[");
    for(int i=0; i<size ;i++){
        if(i != 0)
            printf(",");
        printf("%d",arr[i]);
    }
    printf("]\n");
}

char	_add_two(unsigned int i, char cptr)
{
	(void)i;
	cptr = cptr + 2;
	return (cptr);
}

void	_next(unsigned int i, char *cptr)
{
	(void)i;
	*cptr = *cptr + 1;
}

int main(void)
{
	printf("// part 1\n");
	printf("-----equals-----\n");
	printf("[function]    : [params]                          : [expected value]                : <result>\n");
	printf("ft_isalpha    : 'a'                               : 1                               : ");
	printf("%d\n", ft_isalpha('a')); // 1
	printf("ft_isalpha    : '4'                               : 0                               : ");
	printf("%d\n", ft_isalpha('4')); // 0
	printf("ft_isdigit    : 'a'                               : 0                               : ");
	printf("%d\n", ft_isdigit('a')); // 0
	printf("ft_isdigit    : '4'                               : 1                               : ");
	printf("%d\n", ft_isdigit('4')); // 1
	printf("ft_isalnum    : '&'                               : 0                               : ");
	printf("%d\n", ft_isalnum('&')); // 0
	printf("ft_isalnum    : 'a'                               : 1                               : ");
	printf("%d\n", ft_isalnum('a')); // 1
	printf("ft_isalnum    : '2'                               : 1                               : ");
	printf("%d\n", ft_isalnum('2')); // 1
	printf("ft_isascii    : '&'                               : 1                               : ");
	printf("%d\n", ft_isascii('&')); // 1
	printf("ft_isprint    : '&'                               : 1                               : ");
	printf("%d\n", ft_isprint('&')); // 1
	printf("ft_isprint    : '\\t'                              : 0                               : ");
	printf("%d\n", ft_isprint('\t')); // 0

	printf("\n-----mems-----\n");
	printf("[function]    :[params]                           : [expected value]                : <result>\n");
	int srcA[5] = {1, 2, 3, 4, 5};
	int srcB[5] = {1, 2, 4, 4, 5};
	int srcC[5] = {1, 2, 3, 4, 5};
	int srcD[5] = {1, 2, 3, 4, 5};

	printf("ft_memset     :{1,2,3,4,5},1,int*3                : [16843009,16843009,16843009,4,5]: ");
	void *buf = ft_memset(srcA, 1, sizeof(int) * 3);
	if (buf)
    	print_nums(buf, 5);
	else
		printf("\n");

	printf("ft_bzero      :{1,2,3,4,5},int*3                  : [0,0,0,4,5]                     : ");
	int temp[] = {1, 2, 3, 4, 5};
	buf = (int *)ft_bzero(temp, sizeof(int) * 3);
	if (buf)
    	print_nums(buf, 5);
	else
		printf("\n");

	printf("ft_memcpy     :{null,null,null},{1,2,3,4,5},int*2 : [3,4,5]                         : ");
	int *tmp = malloc(sizeof(int) * 3);
	tmp = (int *)ft_memcpy(tmp, srcC + 2, sizeof(int) * 3);
	if (tmp)
    	print_nums(tmp, 3); // [3,4,5] NULLにコピー（じゃないと未定義動作
	else
		printf("\n");
	free(tmp);

	printf("ft_memmove    :{0,0,0,0,0}[2],{1,2,4,4,5},int*2   : [0,0,1,2,0]                     : ");
	int *memmovebuf = (int *)calloc(5, sizeof(int));
	ft_memmove(memmovebuf + 2, srcB, sizeof(int) * 2);
	if (memmovebuf)
		print_nums(memmovebuf, 5); // [0,0,1,2,0] 上書き
	else
		printf("\n");
	free(memmovebuf);

	printf("ft_memchr     :{1,2,3,4,5},2,int*5                : 2                               : ");
	int *res_memchr = (int *)ft_memchr(srcD, 2, sizeof(int) * 5);
	if (res_memchr)
		printf("%d\n", *res_memchr); // 2
	else
		printf("\n");

	int tmpA[5] = {1, 2, 3, 4, 5};
	int tmpB[5] = {1, 2, 4, 4, 5};
	printf("ft_memcmp     :{1,2,3,4,5},{1,2,4,4,5},int*5      : -1                              : ");
	printf("%d\n", ft_memcmp(tmpA, tmpB, sizeof(int) * 5)); // -1

	printf("\n-----to*.c----\n");
	printf("[function]    : [params]                          : [expected value]                : <result>\n");
	printf("ft_toupper    : 'a'                               : A                               : ");
	printf("%c\n", ft_toupper('a'));
	printf("ft_tolower    : 'A'                               : a                               : ");
	printf("%c\n", ft_tolower('A'));

	printf("\n-----str*.c-----\n");
	printf("[function]    : [params]                          : [expected value]                : <result>\n");
	printf("ft_strlen     : {hello, world!!}                  : 14                              : ");
	printf("%d\n", ft_strlen("hello, world!!"));
	
	printf("ft_strlcpy    : {abcde}, {fghij}, 4               : fgh (len:5)                     : ");
	char dest[20] = "abcde";
	unsigned int res = ft_strlcpy(dest, "fghij", 4);
	printf("%s (len:%u)\n", dest, res);
	
	printf("ft_strlcat    : {abcde}, {fghij}, 9               : abcdefgh (len:10)               : ");
	char *dest2 = strndup("abcde", 5);
	res = ft_strlcat(dest2, "fghij", 9);
	if (dest2)
	{
		printf("%s (len:%u)\n", dest2, res);
		free(dest2);
	}	
	else
		printf("\n");

	printf("ft_strchr     : {abcdedcba},'b'                   : bcdedcba                        : ");
	char *tmp_strchr = ft_strchr("abcdedcba", 'b');
	printf("%s\n", (tmp_strchr) ? tmp_strchr : "null");

	printf("ft_strrchr    : {abcdedcba},'b'                   : ba                              : ");
	char *tmp_strrchr = ft_strrchr("abcdedcba", 'b');
	printf("%s\n", (tmp_strrchr) ? tmp_strrchr : "null");

	printf("ft_strncmp    : {abcde}, {abCde}, 5               : 32                              : ");
	char dest3[20] = "abcde";	
	char dest4[20] = "abCde";
	int cmp_res = ft_strncmp(dest3, dest4, 5);
	printf("%d\n", cmp_res);

	printf("ft_strdup     : {abcde}                           : abcde                           : ");
	char *dup = ft_strdup("abcde");
	if (dup)
	{
		printf("%s\n", dup);
		free(dup);
	}
	else
		printf("\n");

	printf("ft_strnstr    : {abcde}, {cd}, 5                  : cde                             : ");
	char *strnstr_res = ft_strnstr("abcde", "cd", 5);
	printf("%s\n", (strnstr_res) ? strnstr_res : "(null)");

	printf("ft_strnstr    : {abcde}, {cd}, 2                  : NULL                            : ");
	char *strnstr_res2 = ft_strnstr("abcde", "cd", 2);
	if (strnstr_res2 == NULL)
		printf("NULL\n");
	else
		printf("%s\n", strnstr_res2);

	printf("\n-----atoi-----\n");
	printf("[function]    : [params]                          : [expected value]                : <result>\n");
	printf("ft_atoi       : {12345}                           : 12345                           : ");
	printf("%d\n", ft_atoi("12345"));
	printf("ft_atoi       : {+12345}                          : 12345                           : ");
	printf("%d\n", ft_atoi("+12345"));
	printf("ft_atoi       : {\\t\\n   -12345abc}                : -12345                          : ");
	printf("%d\n", ft_atoi("\t\n   -12345abc"));
	printf("ft_atoi       : {   ---12345abc}                  : 0                               : ");
	printf("%d\n", ft_atoi("   ---12345abc"));
	printf("ft_atoi       : {2147483647} // =INT_MAX          : 2147483647                      : ");
	printf("%d\n", ft_atoi("2147483647"));
	printf("ft_atoi       : {-2147483648} // =INT_MIN         : -2147483648                     : ");
	printf("%d\n", ft_atoi("-2147483648"));
	
	printf("\n-----calloc-----\n");
	printf("[function]    : [params]                          : [expected value]                : <result>\n");
	printf("ft_calloc     : 5, sizeof(int)                    : [0,0,0,0,0]                     : ");
	int *calloc_res = (int *)ft_calloc(5, sizeof(int));
	if (calloc_res)
    	print_nums(calloc_res, 5);
	else
		printf("\n");
	free(calloc_res);
	printf("\n");

	printf("// part 2");
	printf("\n-----str*.c-----\n");
	printf("ft_substr     : {hello, world!!}, {0}, {5}        : hello                           : ");
	char *substr_res = ft_substr("hello, world!!", 0, 5);
	if (substr_res)
		printf("%s\n", substr_res);
	else
		printf("\n");
	free(substr_res);

	printf("ft_strjoin    : {hello}, {world!!}                : helloworld!!                    : ");
	char *strjoin_res = ft_strjoin("hello", "world!!");
	if (strjoin_res)
		printf("%s\n", strjoin_res);
	else
		printf("\n");
	free(strjoin_res);

	printf("ft_strtrim    : {--a--p-pl----e----},{-}          : a--p-pl----e                    : ");
	char *strtrim_res = ft_strtrim("--a--p-pl----e----", "-");
	if (strtrim_res)
		printf("%s\n", strtrim_res);
	else
		printf("\n");
	free(strtrim_res);

	printf("ft_split      : {--a--p-pl----e----},'-'          : a,p,pl,e                        : ");
	char **split_res = ft_split("--a--p-pl----e----", '-');
	if (split_res)
	{
		for (int i = 0; split_res && split_res[i]; i++)
		{
			printf("%s", split_res[i]);
			if (split_res[i + 1])
				printf(",");
		}
		printf("\n");
		free(split_res);
	}
	else
		printf("\n");

	printf("ft_strmapi    : {abcde}, _add_two                 : cdefg                           : ");
	char *strmapi_res = ft_strmapi("abcde", _add_two);
	if (strmapi_res)
	{
		printf("%s\n", strmapi_res);
		free(strmapi_res);
	}
	else
		printf("\n");

	printf("ft_striteri   : {abcde}, _next                    : bcdef                           : ");
	char striteri_buf[] = "abcde";
	ft_striteri(striteri_buf, _next);
	printf("%s\n", striteri_buf);
	
	printf("\n-----itoa-----\n");
	printf("[function]    : [params]                          : [expected value]                : <result>\n");
	printf("ft_itoa       : 12345                             : 12345                           : ");
	char *itoa_res = ft_itoa(12345);
	if (itoa_res)
		printf("%s\n", itoa_res);
	else
		printf("\n");
	free(itoa_res);
	printf("ft_itoa       : -2147483648 // =INT_MIN           : -2147483648                     : ");
	char *itoa_res2 = ft_itoa(-2147483648);
	if (itoa_res2)
		printf("%s\n", itoa_res2);
	else
		printf("\n");
	free(itoa_res2);

	printf("\n-----put*_fd.c-----\n");
	printf("[function]    : [params]                          : [expected value]                : <result>\n");
	printf("ft_putchar_fd : 'X', 1                            : X                               : ");
	fflush(stdout);
	ft_putchar_fd('X', 1);
	printf("\n");
	printf("ft_putchar_fd : 'X', 2                            : X                               : (read .err.txt)   ");
	fflush(stdout);
	ft_putchar_fd('X', 2);
	write(2, "\n", 1);
	printf("\n");

	printf("ft_putstr_fd  : {test string.}, 1                 : test string.                    : ");
	fflush(stdout);
	ft_putstr_fd("test string.", 1);
	printf("\n");
	printf("ft_putstr_fd  : {test string.}, 2                 : test string.                    : (read .err.txt)   ");
	fflush(stdout);
	ft_putstr_fd("test string.", 2);
	write(2, "\n", 1);
	printf("\n");

	printf("ft_putendl_fd : {Hello, World!}, 1                : Hello, World!                   : ");
	fflush(stdout);
	ft_putendl_fd("Hello, World!", 1);
	fflush(stdout);
	printf("ft_putendl_fd : {Hello, World!}, 2                : Hello, World!                   : (read .err.txt)   ");
	fflush(stdout);
	ft_putendl_fd("Hello, World!", 2);
	fflush(stdout);
	write(1, "\n", 1);

	printf("ft_putnbr_fd  : 8274, 1                           : 8274                            : ");
	fflush(stdout);
	ft_putnbr_fd(8274, 1);
	printf("\n");
	printf("ft_putnbr_fd  : 8274, 2                           : 8274                            : (read .err.txt)   ");
	fflush(stdout);
	ft_putnbr_fd(8274, 2);
	write(2, "\n", 1);
	printf("\n");

	return (0);
}
