/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/16 17:03:53 by jonathan          #+#    #+#             */
/*   Updated: 2020/03/24 04:55:47 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>

#ifndef LIBFT_H
# define LIBFT_H

int			ft_atoi_base(char *str, char *base);
int			ft_atoi(char *str);
void		ft_bzero(void *s, size_t n);
void		ft_cat(int nb_files, char **files);
char		*ft_convert_base(char *nbr, char *base_from, char *base_to);
long int	ft_file_size(char *file);
char		**ft_fill_sub_tab(char **tab, size_t *sub_len, const char *s, char c);
size_t		*ft_fill_sub_len_tab(size_t *tab, size_t size, const char *s, char *charset);
ssize_t		ft_indexof(char c, char *str);
int			ft_int_size(int nbr);
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_ischarset(char c, const char *charset);
int			ft_isdigit(int c);
int			ft_islower(int c);
int			ft_isprint(int c);
int			ft_isspace(int c);
int			ft_isupper(int c);
char		*ft_itoa_base(int nbr, char *base);
char		*ft_itoa(int nbr);
void		*ft_memalloc(size_t size);
void		*ft_memccpy(void *dest, const void *src, int c, size_t n);
void		*ft_memchr(void *s, int c, size_t n);
int			ft_memcmp(void *s1, void *s2, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		ft_memdel(void **ap);
void		*ft_memmove(void *dest, const void *src, size_t n);
void		*ft_memset(void *s, int c, size_t n);
int			ft_power(int nbr, int pow);
void		ft_putchar(char c);
void		ft_putnbr_base(int nbr, char *base);
void		ft_putnbr(int nbr);
void		ft_putstr(char *str);
int			ft_sqrt(int nbr);
char		*ft_strcat(char *dest, const char *src);
char		*ft_strchr(const char *s, int c);
int			ft_strcmp(char *s1, char *s2);
char		*ft_strcpy(char *dest, const char *src);
char		*ft_strdup(char *str);
size_t		ft_strlcat(char *dest, const char *src, size_t size);
size_t		ft_strlen(const char *str);
char		*ft_strncat(char *dest, const char *src, size_t n);
int			ft_strncmp(char *s1, char *s2, size_t n);
char		*ft_strncpy(char *dest, const char *src, size_t n);
char		*ft_strnstr(char *str, const char *to_find, size_t n);
char		*ft_strrchr(const char *s, int c);
char		**ft_strsplit(char const *s, char c);
char		*ft_strstr(char *str, const char *to_find);
size_t		ft_substrs_count(const char *s, const char *charset);
void		ft_swap(int *a, int *b);
int			ft_tolower(int c);
int			ft_toupper(int c);
int			ft_wrong_base(char *base);

#endif
