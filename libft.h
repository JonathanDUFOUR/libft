/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/16 17:03:53 by jonathan          #+#    #+#             */
/*   Updated: 2020/03/18 22:27:15 by jojo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#ifndef LIBFT_H
# define LIBFT_H

int			ft_atoi_base(char *str, char *base);
int			ft_atoi(char *str);
int			ft_base_digit(char c, char *base);
void		ft_cat(int nb_files, char **files);
long int	ft_file_size(char *file);
int			ft_int_size(int nbr);
int			ft_isdigit(char c);
int			ft_is_in_base(char c, char *base);
int			ft_isspace(char c);
char		*ft_itoa_base(int nbr, char *base);
char		*ft_itoa(int nbr);
int			ft_power(int nbr, int pow);
void		ft_putchar(char c);
void		ft_putnbr_base(int nbr, char *base);
void		ft_putnbr(int nbr);
void		ft_putstr(char *str);
int			ft_sqrt(int nbr);
char		*ft_strcat(char *dest, char *src);
char		*ft_strcpy(char *dest, char *src);
char		*ft_strdup(char *str);
size_t		ft_strlen(const char *str);
char		*ft_strstr(char *str, char *to_find);
int			ft_wrong_base(char *base);

#endif
