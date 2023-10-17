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

int	ft_printf(const char *format, int num, int n2, int n3)
{
	int	i;
	int	a[3];
	int	b;
	
	i = 0;
	b = 0;
	a[0] = num;
	a[1] = n2;
	a[2] = n3;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			ft_putnbr(a[b]);
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
	ft_printf("il mio numero e' :  %i  %i %i ", num, num2, num3);
}
