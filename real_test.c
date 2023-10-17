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
#include "test.h"

#include <unistd.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
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

void	check(const char *format, ...)
{
	if (*format == NULL)
		return ;
	t_list	*data;
	data->data=arg???
}

int	ft_printf(const char *format, t_list *data)
{
	int	i;
	int	b;

	i = 0;
	b = 0;

	while (format[i] != '\0')
	{
		if (format[i] == '%')//also needs to check for '\'
		{
			ft_putnbr(data); //needs to check i + 1 for (c, d, e, f, i, o, s, u, x, %)
			i = i + 2;
			b++;
		}
		ft_putchar(format[i]);
		i++;
	}
}

int	main(void)
{
	int	num;
	int	num2;
	int	num3;

	num = 42;
	num2 = 375;
	num3 = 23;
	check("il mio numero e' :  %i  %i %i ", num, num2, num3);
}
