#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

__attribute__((weak))
int				ft_isalpha(int c)
{
    (void)c;
    printf("no function [ft_isalpha]");
    return 0;
}
__attribute__((weak))
int				ft_isdigit(int c)
{
    (void)c;
    printf("no function [ft_isdigit]");
    return 0;
}
__attribute__((weak))
int				ft_isalnum(int c)
{
    (void)c;
    printf("no function [ft_isalnum]");
    return 0;
}
__attribute__((weak))
int				ft_isascii(int c)
{
    (void)c;
    printf("no function [ft_isascii]");
    return 0;
}
__attribute__((weak))
int				ft_isprint(int c)
{
    (void)c;
    printf("no function [ft_isprint]");
    return 0;
}
__attribute__((weak))
int             ft_strlen(char *str)
{
    (void)str;
    printf("no function [ft_strlen]");
    return 0;
}
__attribute__((weak))
void			*ft_memset(void *s, int c, size_t n)
{
    (void)s;
    (void)c;
    (void)n;
    printf("no function [ft_memset]");
    return NULL;
}
__attribute__((weak))
void            *ft_bzero(void *s, size_t n)
{
    (void)s;
    (void)n;
    printf("no function [ft_bzero]");
    return NULL;
}
__attribute__((weak))
void			*ft_memcpy(void *dest, const void *src, size_t n)
{
    (void)dest;
    (void)src;
    (void)n;
    printf("no function [ft_memcpy]");
    return NULL;
}
__attribute__((weak))
void			*ft_memmove(void *dest, const void *src, size_t n)
{
    (void)dest;
    (void)src;
    (void)n;
    printf("no function [ft_memmove]");
    return NULL;
}
__attribute__((weak))
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
    (void)dest;
    (void)src;
    (void)size;
    printf("no function [ft_strlcpy]");
    return 0;
}
__attribute__((weak))
unsigned int	ft_strlcat(char *dest, char *str, unsigned int size)
{
    (void)dest;
    (void)str;
    (void)size;
    printf("no function [ft_strlcat]");
    return 0;
}
__attribute__((weak))
int				ft_toupper(int c)
{
    (void)c;
    printf("no function [ft_toupper]");
    return 0;
}
__attribute__((weak))
int				ft_tolower(int c)
{
    (void)c;
    printf("no function [ft_tolower]");
    return 0;
}
__attribute__((weak))
char			*ft_strchr(const char *s, int c)
{
    (void)s;
    (void)c;
    printf("no function [ft_strchr]");
    return NULL;
}
__attribute__((weak))
char			*ft_strrchr(const char *s, int c)
{
    (void)s;
    (void)c;
    printf("no function [ft_strrchr]");
    return NULL;
}
__attribute__((weak))
int				ft_strncmp(char *s1, char *s2, unsigned int n)
{
    (void)s1;
    (void)s2;
    (void)n;
    printf("no function [ft_strncmp]");
    return 0;
}
__attribute__((weak))
void			*ft_memchr(const void *s, int c, size_t n)
{
    (void)s;
    (void)c;
    (void)n;
    printf("no function [ft_memchr]");
    return NULL;
}
__attribute__((weak))
int				ft_memcmp(const void *s1, const void *s2, size_t n)
{
    (void)s1;
    (void)s2;
    (void)n;
    printf("no function [ft_memcmp]");
    return 0;
}
__attribute__((weak))
char            *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    (void)haystack;
    (void)needle;
    (void)len;
    printf("no function [ft_strnstr]");
    return NULL;
}
__attribute__((weak))
int				ft_atoi(char *str)
{
    (void)str;
    printf("no function [ft_atoi]");
    return 0;
}
__attribute__((weak))
void            *ft_calloc(size_t count, size_t size)
{
    (void)count;
    (void)size;
    printf("no function [ft_calloc]");
    return NULL;
}
__attribute__((weak))
char			*ft_strdup(char *src)
{
    (void)src;
    printf("no function [ft_strdup]");
    return NULL;
}
__attribute__((weak))

char			*ft_substr(char const *s, unsigned int start, size_t len)
{
    (void)s;
    (void)start;
    (void)len;
    printf("no function [ft_substr]");
    return NULL;
}
__attribute__((weak))
char			*ft_strjoin(const char *s1, const char *s2)
{
    (void)s1;
    (void)s2;
    printf("no function [ft_strjoin]");
    return NULL;
}
__attribute__((weak))
char			*ft_strtrim(char const *s1, char const *set)
{
    (void)s1;
    (void)set;
    printf("no function [ft_strtrim]");
    return NULL;
}
__attribute__((weak))
char			**ft_split(char const *s, char c)
{
    (void)s;
    (void)c;
    printf("no function [ft_split]");
    return NULL;
}
__attribute__((weak))
char			*ft_itoa(int n)
{
    (void)n;
    printf("no function [ft_itoa]");
    return NULL;
}
__attribute__((weak))
char			*ft_strmapi(char	*s, char (*f)(unsigned int, char))
{
    (void)s;
    (void)f;
    printf("no function [ft_strmapi]");
    return NULL;
}
__attribute__((weak))
void			ft_striteri(char	*s, void (*f)(unsigned int, char*))
{
    (void)s;
    (void)f;
    printf("no function [ft_striteri]");
}
__attribute__((weak))
void			ft_putchar_fd(char c, int fd)
{
    (void)c;
    (void)fd;
	printf("no function [ft_putchar_fd]");
}
__attribute__((weak))
void			ft_putstr_fd(char *s, int fd)
{
    (void)s;
    (void)fd;
    printf("no function [ft_putstr_fd]");
}
__attribute__((weak))
void			ft_putendl_fd(char *s, int fd)
{
    (void)s;
    if (fd == 1)
    	printf("no function [ft_putchar_fd]\n");
	else
		printf("no function [ft_putchar_fd]");
}
__attribute__((weak))
void			ft_putnbr_fd(int n, int fd)
{
    (void)n;
    (void)fd;
    printf("no function [ft_putnbr_fd]");
}
