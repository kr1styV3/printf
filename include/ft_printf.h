/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:27:23 by chrlomba          #+#    #+#             */
/*   Updated: 2023/10/31 12:16:01 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include "libft.h"

int			ft_printf(const char *format, ...);
int			check_format(const char *ptr, int *out, int *i, va_list ap);
int			check_params(const char ptr, va_list ap);
int			ft_in_base(char c, char *base);
void		first_check(int bol, const char *ptr, va_list ap, int i);
void		ft_print(unsigned int n, char *base, unsigned int size);
void		ft_putchar(const char c);
void		ft_putstr(const char *ptr);
void		ft_putnbr_base(unsigned long long nbr, char *base);
void		ft_unsigned_putnbr(unsigned int nb);
void		ft_putnbr(int nb);
int			left_just(const char *ptr, va_list ap, int out, int *j);
const char	*zero_padding(const char *ptr, va_list ap, int *j);
#endif
