/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_conv.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:54:46 by chrlomba          #+#    #+#             */
/*   Updated: 2023/10/26 14:10:19 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(const char c)
{
	write (1, &c, 1);
}

void	ft_putstr(const char *ptr)
{
	int	i;

	i = 0;
	while (*ptr != '\0')
	{
		ft_putchar(*ptr);
		ptr++;
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

void	ft_unsigned_putnbr(unsigned int nb)
{
	unsigned int	number;

	number = nb;
	if (number >= 10)
		ft_putnbr(number / 10);
	ft_putchar(number % 10 + 48);
}

int	left_just(const char *ptr, va_list ap, int out)
{
	int		buff;
	int		j;

	j = 0;
	buff = ft_atoi (ptr) - 2;
	while (*ptr >= '0' && *ptr <= '9')
	{
		ptr++;
	}
	check_params(*ptr, ap);
	while (j < buff)
	{
		ft_putchar(' ');
		j++;
		out++;
	}
	return (j);
}
