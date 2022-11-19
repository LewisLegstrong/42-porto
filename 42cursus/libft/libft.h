#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <ctype.h>
# include <stdlib.h>
# include <string.h>
# include <stddef.h> 
# include <bsd/string.h>

int	ft_atoi(char *str);
void ft_bzero(void *s, size_t n);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
void	*memchr(const void *s, int c, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void *ft_memset(void *s, int c, size_t n);
char *ft_strchr(const char *s, int c);
size_t	ft_strlcat(char *dest, char *src, unsigned int size);
size_t	ft_strlen(char *str);
unsigned int	ft_strnscmp(char *s1, char *s2, unsigned int n);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char *ft_strnstr(const char *big, const char *little, size_t len);;
char	*ft_strrchr(const char *s, int c);
int ft_tolower(int c);
int ft_toupper(int c);

#endif
