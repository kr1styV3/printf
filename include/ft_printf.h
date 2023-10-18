/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:27:23 by chrlomba          #+#    #+#             */
/*   Updated: 2023/10/18 19:20:51 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int			ft_printf(const char *format, ...);
int			check_format(const char *ptr, int i, va_list ap);
int			g_check_params(const char *ptr, va_list ap);
void		first_check(int bol, const char *ptr, va_list ap, int i);
void		ft_putchar(const char c);
void		ft_putstr(const char *ptr);
void		ft_putnbr(int nb);
#endif
