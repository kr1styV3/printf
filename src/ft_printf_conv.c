/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_conv.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:33:06 by chrlomba          #+#    #+#             */
/*   Updated: 2023/10/18 22:12:44 by chrlomba         ###   ########.fr       */
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
