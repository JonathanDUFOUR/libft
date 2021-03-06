/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/16 17:03:53 by jonathan          #+#    #+#             */
/*   Updated: 2021/03/06 21:14:06 by jonathan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <sys/types.h>
# include <inttypes.h>

# define BUFF_SIZE 8192
# define TRUE 1
# define FALSE 0

typedef	int				t_bool;
typedef struct s_list	t_list;

struct					s_list
{
	void	*content;
	size_t	content_size;
	t_list	*next;
};

int						ft_atoi_base(char const *s, char *b);
int						ft_atoi(char const *s) __attribute__((nonnull));
long					ft_atol(char const *s);
void					ft_bzero(void *s, size_t n);
void					*ft_calloc(size_t n, size_t size);
void					ft_cat(char **f);
char					*ft_convert_base(char *n,
										char *base_from,
										char *base_to);
char					*ft_cut_spaces(char *s);
size_t					ft_file_size(char *f);
uint32_t				ft_find_next_prime(int n);
ssize_t					ft_indexof(char c, char *str);
int						ft_int_size(int n);
int						*ft_intsort(int *tab, size_t size);
t_bool					ft_isalnum(int c);
t_bool					ft_isalpha(int c);
t_bool					ft_isascii(int c);
t_bool					ft_ischarset(char c, char const *charset);
t_bool					ft_isdigit(int c);
t_bool					ft_islower(int c);
t_bool					ft_isprime(uint32_t n);
t_bool					ft_isprint(int c);
t_bool					ft_isspace(int c);
t_bool					ft_isupper(int c);
char					*ft_itoa_base(int n, char *b);
char					*ft_itoa(int n);
void					ft_lstadd(t_list **alst, t_list *new);
void					ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void					ft_lstdelone(t_list **alst,
									void (*del)(void *, size_t));
void					ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list					*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list					*ft_lstnew(void const *content, size_t content_size);
void					*ft_memalloc(size_t size);
void					*ft_memccpy(void *dest,
									const void *src,
									int c,
									size_t n);
void					*ft_memchr(void *s, int c, size_t n);
int						ft_memcmp(void const *s1, void const *s2, size_t n);
void					*ft_memcpy(void *dest, const void *src, size_t n);
void					ft_memdel(void **ap);
void					*ft_memmove(void *dest, const void *src, size_t n);
void					*ft_memset(void *s, int c, size_t n);
void					ft_padded_putnbr_base(u_int32_t n,
											const char *b,
											u_int8_t l);
int						ft_power(int n, int p);
void					ft_print_bits(u_int32_t nbr, size_t n);
void					ft_putchar(char c);
void					ft_putchar_fd(char c, int fd);
void					ft_putendl(char const *s);
void					ft_putendl_fd(char const *s, int fd);
void					ft_putlnbr(long n);
void					ft_putlunbr(unsigned long n);
void					ft_putnbr_base(u_int32_t n, const char *b);
void					ft_putnbr(int n);
void					ft_putnbr_fd(int n, int fd);
void					ft_putstr(char const *s);
void					ft_putstr_fd(char const *s, int fd);
void					ft_putunbr(unsigned n);
void					ft_reverse_all_bytes(uint32_t *ptr);
void					ft_reverse_byte(uint32_t *ptr, uint32_t idx);
void					ft_reverse_each_byte(uint32_t *ptr);
void					ft_set_bit(uint32_t *ptr, uint32_t idx);
float					ft_sqrt(u_int32_t n);
char					**ft_split(char const *s, char c);
int						ft_strcasecmp(char const *s1, char const *s2);
t_bool					ft_strcaseequ(char const *s1, char const *s2);
char					*ft_strcat(char *dest, const char *src);
char					*ft_strchr(const char *s, int c);
void					ft_strclr(char *s);
int						ft_strcmp(char const *s1, char const *s2);
char					*ft_strcpy(char *dest, const char *src);
void					ft_strdel(char **as);
char					*ft_strdup(char const *s);
t_bool					ft_strequ(char const *s1, char const *s2);
void					ft_striter(char *s, void (*f)(char *));
void					ft_striteri(char *s, void (*f)(unsigned, char *));
char					*ft_strjoin(char const *s1, char const *s2);
char					*ft_neo_strjoin(char const **strs, char const *link);
size_t					ft_strlcat(char *dest, const char *src, size_t size);
size_t					ft_strlen(const char *str);
char					*ft_strmap(char const *s, char (*f)(char));
char					*ft_strmapi(char const *s,
									char (*f)(uint32_t, char));
int						ft_strncasecmp(char const *s1,
										char const *s2,
										size_t n);
t_bool					ft_strncaseequ(char const *s1,
										char const *s2,
										size_t n);
char					*ft_strncat(char *dest, const char *src, size_t n);
int						ft_strncmp(char const *s1, char const *s2, size_t n);
char					*ft_strncpy(char *dest, const char *src, size_t n);
char					*ft_strndup(char const *s, size_t n);
t_bool					ft_strnequ(char const *s1, char const *s2);
char					*ft_strnew(size_t size);
char					*ft_strnstr(char *s, const char *to_find, size_t n);
char					*ft_strrchr(const char *s, int c);
char					*ft_strrev(char *s);
char					**ft_strsort(char **strs);
char					*ft_strstr(char const *s, const char *to_find);
char					*ft_strtrim(char const *s, char const *set);
char					*ft_substr(char const *s, uint32_t start, size_t len);
void					ft_swap(int *a, int *b);
void					ft_swap_bits(uint32_t *ptr,
									uint32_t idx1,
									uint32_t idx2);
void					ft_swap_strs(char **s1, char **s2);
void					ft_toggle_bit(uint32_t *ptr, uint32_t idx);
void					ft_toggle_byte(uint32_t *ptr, uint32_t idx);
void					ft_toggle_nbyte(uint32_t *ptr, uint32_t n);
int						ft_tolower(int c);
int						ft_toupper(int c);
int						*ft_ultimate_tolower(int *c);
int						*ft_ultimate_toupper(int *c);
void					ft_unset_bit(uint32_t *ptr, uint32_t idx);
t_bool					ft_wrong_base(const char *b);

#endif
