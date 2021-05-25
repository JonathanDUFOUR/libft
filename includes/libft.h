/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/16 17:03:53 by jonathan          #+#    #+#             */
/*   Updated: 2021/05/18 06:06:22 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdint.h>
# include <sys/types.h>
# include <inttypes.h>

# define BUFF_SIZE 8192
# define TRUE 1
# define FALSE 0

typedef struct s_list	t_list;

struct					s_list
{
	void	*content;
	t_list	*next;
};

int			ft_atoi_base(char const *s, char const *b);
int32_t		ft_atoi(char const *s) __attribute__((nonnull));
int64_t		ft_atol(char const *s) __attribute__((nonnull));
uint32_t	ft_atou(char const *s) __attribute__((nonnull));
uint64_t	ft_atoul(char const *s) __attribute__((nonnull));
void		ft_bzero(void *s, size_t n);
void		*ft_calloc(size_t n, size_t size);
void		ft_cat(char **f);
char		*ft_convert_base(char const *n, char const *bf, char const *bt);
char		*ft_ctoa(char const c);
char		*ft_cut_spaces(char *s);
size_t		ft_file_size(char *f);
uint32_t	ft_find_next_prime(int n);
ssize_t		ft_indexof(char c, char const *str);
uint32_t	ft_intlen(int n);
int			*ft_intsort(int *tab, size_t size);
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_ischarset(char c, char const *charset);
int			ft_isdigit(int c);
int			ft_islower(int c);
int			ft_isprime(uint32_t n);
int			ft_isprint(int c);
int			ft_isspace(int c);
int			ft_isupper(int c);
char		*ft_itoa_base(int n, char const *b);
char		*ft_itoa(int n);
void		ft_lstadd_back(t_list **alst, t_list *new);
void		ft_lstadd_front(t_list **alst, t_list *new);
void		ft_lstclear(t_list **lst, void (*des)(void *));
void		ft_lstdelone(t_list *alst, void (*del)(void *));
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstlast(t_list *lst);
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list		*ft_lstnew(void const *content);
int			ft_lstsize(t_list *lst);
char		*ft_lutoa_base(uint64_t nbr, char const *base);
void		*ft_memalloc(size_t size);
void		*ft_memccpy(void *dest, void const *src, int c, size_t n);
void		*ft_memchr(void *s, int c, size_t n);
int			ft_memcmp(void const *s1, void const *s2, size_t n);
void		*ft_memcpy(void *dest, void const *src, size_t n);
void		ft_memdel(void **ap);
void		*ft_memmove(void *dest, void const *src, size_t n);
void		*ft_memset(void *s, int c, size_t n);
void		ft_padded_putnbr_base(uint32_t n, char const *b, uint8_t l);
int			ft_power(int n, uint32_t pow);
void		ft_putbyte(uint8_t byte);
void		ft_putbytes(void *addr, size_t size);
void		ft_putchar(char c);
void		ft_putchar_fd(char c, int fd);
void		ft_putendl(char const *s);
void		ft_putendl_fd(char const *s, int fd);
void		ft_putlnbr(long n);
void		ft_putlunbr(unsigned long n);
void		ft_putnbr(int n);
void		ft_putnbr_base(uint32_t n, char const *b);
void		ft_putnbr_bin(uint32_t n);
void		ft_putnbr_hexa(uint32_t n, int c);
void		ft_putnbr_oct(uint32_t n);
void		ft_putnbr_fd(int n, int fd);
void		ft_putstr(char const *s);
void		ft_putstr_fd(char const *s, int fd);
void		ft_reverse_all_bytes(uint32_t *ptr);
void		ft_reverse_byte(uint32_t *ptr, uint32_t idx);
void		ft_reverse_each_byte(uint32_t *ptr);
void		ft_set_bit(void *ptr, size_t size, size_t idx);
float		ft_sqrt(uint32_t n);
char		**ft_split(char const *s, char c);
int			ft_strcasecmp(char const *s1, char const *s2);
int			ft_strcaseequ(char const *s1, char const *s2);
char		*ft_strcat(char *dest, char const *src);
char		*ft_strchr(char const *s, int c);
void		ft_strclr(char *s);
int			ft_strcmp(char const *s1, char const *s2);
char		*ft_strcpy(char *dest, char const *src);
void		ft_strdel(char **as);
char		*ft_strdup(char const *s);
int			ft_strequ(char const *s1, char const *s2);
void		ft_striter(char *s, void (*f)(char *));
void		ft_striteri(char *s, void (*f)(unsigned, char *));
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_neo_strjoin(char const **strs, char const *link);
size_t		ft_strlcat(char *dest, char const *src, size_t size);
size_t		ft_strlcpy(char *dst, char const *src, size_t size);
size_t		ft_strlen(char const *s);
char		*ft_strmap(char const *s, char (*f)(char));
char		*ft_strmapi(char const *s, char (*f)(uint32_t, char));
int			ft_strncasecmp(char const *s1, char const *s2, size_t n);
int			ft_strncaseequ(char const *s1, char const *s2, size_t n);
char		*ft_strncat(char *dest, char const *src, size_t n);
int			ft_strncmp(char const *s1, char const *s2, size_t n);
char		*ft_strncpy(char *dest, char const *src, size_t n);
char		*ft_strndup(char const *s, size_t n);
int			ft_strnequ(char const *s1, char const *s2);
char		*ft_strnew(size_t size);
char		*ft_strnstr(char *s, char const *to_find, size_t n);
char		*ft_strrchr(char const *s, int c);
char		*ft_strrev(char *s);
char		**ft_strsort(char **strs);
char		*ft_strstr(char const *s, char const *to_find);
char		*ft_strtrim(char const *s, char const *set);
char		*ft_substr(char const *s, uint32_t start, size_t len);
void		ft_swap(int *a, int *b);
void		ft_swap_bits(uint32_t *ptr, uint32_t idx1, uint32_t idx2);
void		ft_swap_strs(char **s1, char **s2);
void		ft_toggle_bit(uint32_t *ptr, uint32_t idx);
void		ft_toggle_byte(uint32_t *ptr, uint32_t idx);
void		ft_toggle_nbyte(uint32_t *ptr, uint32_t n);
int			ft_tolower(int c);
int			ft_toupper(int c);
uint32_t	ft_uintlen(uint32_t n);
int			*ft_ultimate_tolower(int *c);
int			*ft_ultimate_toupper(int *c);
void		ft_unset_bit(uint32_t *ptr, uint32_t idx);
char		*ft_utoa_base(uint32_t nbr, char const *base);
char		*ft_utoa(uint32_t n);
int			ft_wrong_base(char const *b);

#endif
