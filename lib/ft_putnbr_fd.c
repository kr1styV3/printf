/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 23:10:35 by chrlomba          #+#    #+#             */
/*   Updated: 2023/10/10 23:13:55 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (fd < 0)
	{
		return ;
	}
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n = n * -1;
		}
		if (n >= 10)
		{
			ft_putnbr_fd(n / 10, fd);
		}
		ft_putchar_fd((n % 10) + '0', fd);
	}
}

int main(void)
{
	int num1 = 42;
	int num2 = -12345;
	int num3 = 0;
	int num4 = 2147483647;
	int num5 = -2147483648;

	write(1, "Testing ft_putnbr_fd:\n", 21);

	write(1, "Number: ", 8);
	ft_putnbr_fd(num1, 1); // Output: 42
	write(1, "\n", 1);

	write(1, "Number: ", 8);
	ft_putnbr_fd(num2, 1); // Output: -12345
	write(1, "\n", 1);

	write(1, "Number: ", 8);
	ft_putnbr_fd(num3, 1); // Output: 0
	write(1, "\n", 1);

	write(1, "Number: ", 8);
	ft_putnbr_fd(num4, 1); // Output: 2147483647
	write(1, "\n", 1);

	write(1, "Number: ", 8);
	ft_putnbr_fd(num5, -1); // Output: -2147483648
	write(1, "\n", 1);

	return (0);
}

