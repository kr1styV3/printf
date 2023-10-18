/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 22:36:18 by chrlomba          #+#    #+#             */
/*   Updated: 2023/10/18 22:58:48 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*implement flag checkln 21*/
int	check_format(const char *ptr, int i, va_list ap)
{
	(void )i;
	ptr++;
	if (g_check_params(ptr, ap))
		return (1);
	else
	{
		return (0);
	}
}

int	g_check_params(const char *ptr, va_list ap)
{
	void			*addr;
	unsigned long	ad;

	if (*ptr == 'i' || *ptr == 'd')
	{
		ft_putnbr(va_arg(ap, int ));
	}
	else if (*ptr == 'c')
	{
		ft_putchar((const char )va_arg(ap, int));
	}
	else if (*ptr == 's')
	{
		ft_putstr(va_arg(ap, const char *));
	}
	else if (*ptr == 'p')
	{
		addr = va_arg(ap, void *);
		if (addr != NULL)
			ft_putstr("(null)");
	}
	else
	{
		ad = (unsigned long)addr;
		ft_putstr("0x");
		ft_putnbr_base(addr, "0123456789abcdef");
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
		if (bool == 0 && format[i] == '%')
			bool = 1;
		if (bool == 1)
		{
			bool = 0;
			check_format(&format[i], i, list);
			i += 2;
		}
		ft_putchar(format[i]);
		i++;
	}
	va_end(list);
	return (0);
}
