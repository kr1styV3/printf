/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:39:49 by chrlomba          #+#    #+#             */
/*   Updated: 2023/10/18 19:42:38 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	char		*just_check;
	int			num;
	char		*str;

	just_check = "do_you_work??\n";
	num = 42;
	str = "**    *** 101010 *** 1-1-1--- aAa zz ";
	ft_printf("%sil mio numero e' :   %i  %s", just_check, num, str);
}
