/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 22:36:18 by chrlomba          #+#    #+#             */
/*   Updated: 2023/10/24 13:58:54 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
/*implement flag checkln 21*/
int	check_format(const char *ptr, int i, va_list ap)
{
	++ptr;
	if (check_params(*ptr, ap))
		return (1);
	else
	{
		if (*ptr == '-')
		{
			++ptr;
			i += left_just(ptr, ap, i);
		}
	}
	return (i);
}

int	check_params(const char ptr, va_list ap)
{
	if (ptr == 'i' || ptr == 'd')
	{
		ft_putnbr(va_arg(ap, int ));
		return (1);
	}
	else if (ptr == 'c')
	{
		ft_putchar((const char )va_arg(ap, int));
		return (1);
	}
	else if (ptr == 's')
	{
		ft_putstr(va_arg(ap, const char *));
		return (1);
	}
	else if (ptr == 'u')
	{
		ft_unsigned_putnbr(va_arg(ap, unsigned int));
		return (1);
	}
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	list;
	int		i;
	int		bool;

	i = 0;
	bool = 0;
	va_start(list, format);
	while (*format != '\0')
	{
		if (bool == 0 && *format == '%')
			bool = 1;
		if (bool == 1)
		{
			i += check_format(format, i, list);
			bool = 0;
		}
		ft_putchar(*format);
		format++;
		i++;
	}
	va_end(list);
	return (0);
}
