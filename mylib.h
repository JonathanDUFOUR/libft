/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mylib.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jojo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 17:07:21 by jojo              #+#    #+#             */
/*   Updated: 2020/03/15 22:58:48 by jojo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_atoi_base(char *str, char *base);
int			ft_atoi(char *str);
int			ft_base_digit(char c, char *base);
void		ft_cat(int argc, char **argv);
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
int			ft_strlen(char *str);
char		*ft_strstr(char *str, char *to_find);
int			ft_wrong_base(char *base);
