/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:39:49 by chrlomba          #+#    #+#             */
/*   Updated: 2023/10/18 18:05:11 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	char		*just_check;
	int			num;
	char		c;
	int			d;
	char		*str;

	just_check = "do_you_work??\n";
	num = 42;
	c = '&';
	d = 7145;
	str = "**    *** 101010 *** 1-1-1--- aAa zz ";
	ft_printf("%sil mio numero e' :   %i  %i \nil mio char e : \t%c \nil mio numeo 'd' e : \t%d\nla mia stringa fa cosi : %s \n\n\n%s \n %s", just_check, num, num, c, d, str, str);
}
