#ifndef FT_H
# define FT_H

#include <stdlib.h>

void    *ft_bzero(void *s, size_t n);
int		ft_isalnum(int c);
int 	ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void    *ft_memcpy(void *dst, const void *src, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t len);
void    *ft_memset(void *b, int c, size_t len);
char    *ft_strchr(const char *s, int c);
size_t  ft_strlcat(char *dst, const char *restrict src, size_t dstsize);
size_t  ft_strlcpy(char *dst, const char *restrict src, size_t dstsize);
size_t  ft_strlen(const char *s);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strrchr(const char *s, int c);
int ft_tolower(int c);
int ft_toupper(int c);
char *ft_substr(char const *s, unsigned int start,
size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char    **ft_split(char const *s, char c);

#endif
	
