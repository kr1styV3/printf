/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:05:11 by chrlomba          #+#    #+#             */
/*   Updated: 2023/10/31 12:18:48 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

const char	*zero_padding(const char *ptr, va_list ap, int *j)
{
	int				buff;
	int				i;

	i = 0;
	buff = ft_atoi(ptr);
	while (i++ < buff)
		ft_putchar('0');
	while (ptr[*j] >= '0' && ptr[*j] <= '9')
		ptr[++(*j)];
	check_params(ptr[*j], ap);
	return (ptr);
}
