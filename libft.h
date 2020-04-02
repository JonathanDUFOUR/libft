/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/16 17:03:53 by jonathan          #+#    #+#             */
/*   Updated: 2020/04/02 16:02:33 by jdufour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>

#ifndef LIBFT_H
# define LIBFT_H

# define BUFF_SIZE 8192
# define TRUE 1
# define FALSE 0

typedef	char			t_bool;
typedef struct s_list 	t_list;
typedef union u_token 	t_token;

union		u_token
{
	t_token	*prev;
	t_token	*next;
	char	op;
	int		value;
};

struct		s_list
{
	void	*content;
	size_t	content_size;
	t_list	*next;
};

int			ft_atoi_base(char const *s, char *b);
int			ft_atoi(char const *s);
void		ft_bzero(void *s, size_t n);
void		ft_cat(char **f);
char		*ft_convert_base(char *n, char *base_from, char *base_to);
char		*ft_cut_spaces(char *s);
int			ft_doop(char *calc);
size_t		ft_file_size(char *f);
ssize_t		ft_indexof(char c, char *str);
int			ft_int_size(int n);
t_bool		ft_isalnum(int c);
t_bool		ft_isalpha(int c);
t_bool		ft_isascii(int c);
t_bool		ft_ischarset(char c, char const *charset);
t_bool		ft_isdigit(int c);
t_bool		ft_islower(int c);
t_bool		ft_isprint(int c);
t_bool		ft_isspace(int c);
t_bool		ft_isupper(int c);
char		*ft_itoa_base(int n, char *b);
char		*ft_itoa(int n);
void		ft_lstadd(t_list **alst, t_list *new);
void		ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void		ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void		ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list		*ft_lstnew(void const *content, size_t content_size);
void		*ft_memalloc(size_t size);
void		*ft_memccpy(void *dest, const void *src, int c, size_t n);
void		*ft_memchr(void *s, int c, size_t n);
int			ft_memcmp(void const *s1, void const *s2, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		ft_memdel(void **ap);
void		*ft_memmove(void *dest, const void *src, size_t n);
void		*ft_memset(void *s, int c, size_t n);
void		ft_padded_putnbr_base(u_int32_t n, const char *b, u_int8_t l);
int			ft_power(int n, int p);
void		ft_print_bits(u_int32_t nbr, size_t n);
void		ft_putchar(char c);
void		ft_putchar_fd(char c, int fd);
void		ft_putendl(char const *s);
void		ft_putendl_fd(char const *s, int fd);
void		ft_putnbr_base(u_int32_t n, const char *b);
void		ft_putnbr(int n);
void		ft_putnbr_fd(int n, int fd);
void		ft_putstr(char const *s);
void		ft_putstr_fd(char const *s, int fd);
int			ft_sqrt(u_int32_t n);
int			ft_strcasecmp(char const *s1, char const *s2);
t_bool		ft_strcaseequ(char const *s1, char const *s2);
char		*ft_strcat(char *dest, const char *src);
char		*ft_strchr(const char *s, int c);
void		ft_strclr(char *s);
int			ft_strcmp(char const *s1, char const *s2);
char		*ft_strcpy(char *dest, const char *src);
void		ft_strdel(char **as);
char		*ft_strdup(char const *s);
t_bool		ft_strequ(char const *s1, char const *s2);
void		ft_striter(char *s, void (*f)(char *));
void		ft_striteri(char *s, void (*f)(unsigned, char *));
char		*ft_strjoin(char const **strs, char const *link);
size_t		ft_strlcat(char *dest, const char *src, size_t size);
size_t		ft_strlen(const char *str);
char		*ft_strmap(char const *s, char (*f)(char));
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int			ft_strncasecmp(char const *s1, char const *s2, size_t n);
t_bool		ft_strncaseequ(char const *s1, char const *s2, size_t n);
char		*ft_strncat(char *dest, const char *src, size_t n);
int			ft_strncmp(char const *s1, char const *s2, size_t n);
char		*ft_strncpy(char *dest, const char *src, size_t n);
char		*ft_strndup(char const *s, size_t n);
t_bool		ft_strnequ(char const *s1, char const *s2);
char		*ft_strnew(size_t size);
char		*ft_strnstr(char *s, const char *to_find, size_t n);
char		*ft_strrchr(const char *s, int c);
char		*ft_strrev(char *s);
char		**ft_strsplit(char const *s, char c);
char		*ft_strstr(char const *s, const char *to_find);
char		*ft_strsub(char const *si, unsigned start, size_t len);
char		*ft_strtrim(char const *s);
size_t		ft_substrs_count(const char *s, const char *charset);
void		ft_swap(int *a, int *b);
int			ft_tolower(int c);
int			ft_toupper(int c);
int			*ft_ultimate_tolower(int *c);
int			*ft_ultimate_toupper(int *c);
t_bool		ft_wrong_base(const char *b);

#endif
