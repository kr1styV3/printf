/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 22:36:18 by chrlomba          #+#    #+#             */
/*   Updated: 2023/10/18 17:07:46 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	check_params(const char *ptr, va_list ap)
{
	if (*ptr == 'i' || *ptr == 'd')
	{
		ft_putnbr(va_arg(ap, int ));
	}
	else if (*ptr == 'c')
	{
		ft_putchar((char )va_arg(ap, int));
	}
	else if (*ptr == 's')
	{
		ft_putstr(va_arg(ap, char *));
	}
}

int	ft_printf(const char *format, ...)
{
	va_list	list;
	int		i;

	i = 0;
	va_start(list, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			check_params(&format[i + 1], list);
			i = i + 2;
		}
		ft_putchar(format[i]);
		i++;
	}
	va_end(list);
	return (0);
}
