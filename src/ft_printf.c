/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 22:36:18 by chrlomba          #+#    #+#             */
/*   Updated: 2023/10/18 19:22:23 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*implement flag checkln 21*/
int	check_format(const char *ptr, int i, va_list ap)
{
	if (g_check_params(&ptr[i + 1], ap))
		return (1);
	else
	{
		return (0);
	}
}

void	first_check(int bol, const char *ptr, va_list ap, int i)
{
	if (bol == 0 && *ptr == '%')
		bol = 1;
	else if (bol == 1)
	{
		if (check_format(ptr, i, ap))
		{
			g_check_params(++ptr, ap);
		}
	}
	return ;
}

int	g_check_params(const char *ptr, va_list ap)
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
	while (format[i] != '\0')
	{
		first_check(bool, &format[i], list, i);
		ft_putchar(format[i]);
		i++;
	}
	va_end(list);
	return (0);
}
