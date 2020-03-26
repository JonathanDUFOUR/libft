/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/16 17:03:53 by jonathan          #+#    #+#             */
/*   Updated: 2020/03/26 02:29:39 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>

#ifndef LIBFT_H
# define LIBFT_H

# define BUFF_SIZE 8192

int		ft_atoi_base(char const *s, char *b);
int		ft_atoi(char const *s);
void	ft_bzero(void *s, size_t n);
void	ft_cat(char **f);
char	*ft_convert_base(char *n, char *base_from, char *base_to);
size_t	ft_file_size(char *f);
size_t	*ft_fill_sub_len_tab(size_t *tab, size_t size, const char *s, char *charset);
char	**ft_fill_sub_tab(char **tab, size_t *sub_len, const char *s, char c);
ssize_t	ft_indexof(char c, char *str);
int		ft_int_size(int n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_ischarset(char c, const char *charset);
int		ft_isdigit(int c);
int		ft_islower(int c);
int		ft_isprint(int c);
int		ft_isspace(int c);
int		ft_isupper(int c);
char	*ft_itoa_base(int n, char *b);
char	*ft_itoa(int n);
void	*ft_memalloc(size_t size);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memchr(void *s, int c, size_t n);
int		ft_memcmp(void *s1, void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	ft_memdel(void **ap);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	ft_padded_putnbr_base(u_int32_t n, const char *b, u_int8_t l);
int		ft_power(int n, int p);
void	ft_print_int_bits(u_int32_t n);
void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl(char const *s);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr_base(u_int32_t n, const char *b);
void	ft_putnbr(int n);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr(char const *s);
void	ft_putstr_fd(char const *s, int fd);
int		ft_sqrt(u_int32_t n);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strchr(const char *s, int c);
void	ft_strclr(char *s);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strcpy(char *dest, const char *src);
void	ft_strdel(char **as);
char	*ft_strdup(char *s);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *str);
char	*ft_strncat(char *dest, const char *src, size_t n);
int		ft_strncmp(char *s1, char *s2, size_t n);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strnew(size_t size);
char	*ft_strnstr(char *s, const char *to_find, size_t n);
char	*ft_strrchr(const char *s, int c);
char	**ft_strsplit(char const *s, char c);
char	*ft_strstr(char *s, const char *to_find);
size_t	ft_substrs_count(const char *s, const char *charset);
void	ft_swap(int *a, int *b);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		*ft_ultimate_tolower(int *c);
int		*ft_ultimate_toupper(int *c);
int		ft_wrong_base(const char *b);

#endif
