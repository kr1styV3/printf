/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:44:22 by chrlomba          #+#    #+#             */
/*   Updated: 2023/10/10 14:52:29 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_toupper(int n)
{
	unsigned char	s;

	s = (unsigned int) n;
	if (ft_isalpha(n) == 0)
		return (n);
	if (s < 97 || s > 122)
		return (n);
	s -= 32;
	return (s);
}
