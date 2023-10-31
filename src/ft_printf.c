/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 21:52:01 by chrlomba          #+#    #+#             */
/*   Updated: 2023/10/31 12:17:35 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
/*implement flag checkln 21*/
int	check_format(const char *ptr, int *out, int *i, va_list ap)
{
	int	j;

	(*i)++;
	if (check_params(ptr[*i], ap))
	{
		(*i)++;
		return (1);
	}
	else
	{
		j = 0;
		if (ptr[*i] == '-')
		{
			(*i)++;
			*out += left_just(&ptr[*i], ap, *out, &j);
			*i += j + 1;
		}
		if (ptr[*i] == '0')
		{
			(*i)++;
			ptr = zero_padding(&ptr[*i], ap, &j);
			*i += j + 1;;
		}
	}
	return (*out);
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
	int		out;
	int		bool;

	i = 0;
	bool = 0;
	out = 0;
	va_start(list, format);
	while (format[i] != '\0')
	{
		if (bool == 0 && format[i] == '%')
			bool = 1;
		if (bool == 1)
		{
			out += check_format(&format[i], &out, &i, list);
			bool = 0;
		}
		ft_putchar(format[i]);
		i++;
	}
	va_end(list);
	return (0);
}
