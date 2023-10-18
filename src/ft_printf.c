/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   real_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 22:36:18 by chrlomba          #+#    #+#             */
/*   Updated: 2023/10/15 22:55:50 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

#include <unistd.h>
#include <stdarg.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *ptr)
{
	int	i;

	i = 0;
	while (ptr[i] != '\0')
	{
		ft_putchar(ptr[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	unsigned int	number;

	if (nb < 0)
	{
		ft_putchar('-');
		number = nb * -1;
	}
	else
		number = nb;
	if (number >= 10)
		ft_putnbr(number / 10);
	ft_putchar(number % 10 + 48);
}


int	ft_printf(const char *format, ...)
{
	va_list	list;
	int		i;

	i = 0;
	va_start(list, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%') /*also needs to check for '\'*/
		{
			if (format[i + 1] == 'i')
			{
				ft_putnbr(va_arg(list, int ));
			}/*needs to check i + 1 for ( d, e, f,  o, u, x, %)*/
			else if (format[i + 1] == 'c')
			{
				ft_putchar((char )va_arg(list, int));
			}
			else if (format [i + 1] == 's')
			{
				ft_putstr((char *)va_arg(list, char *));
			}
			i = i + 2;
		}
		ft_putchar(format[i]);
		i++;
	}
	va_end(list);
	return (0);
}

int	main(void)
{
	char		*just_check;
	int			num;
	int			num2;
	char		c;
	int			num3;
	char		*str;

	just_check = "do_you_work??\n";
	num = 42;
	num2 = 375;
	num3 = 23;
	c = '*';
	str = "**    *** 101010 *** 1-1-1--- aAa zz ";
	ft_printf("%sil mio numero e' :   %i  %i \nil mio char e : \t%c \nil mio ultimo num e : %i \nla mia stringa fa cosi : %s ", just_check, num, num2, c, num3, str);
}
