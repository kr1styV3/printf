/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:53:22 by chrlomba          #+#    #+#             */
/*   Updated: 2023/10/10 14:55:55 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_tolower(int n)
{
	unsigned char	s;

	s = (unsigned int) n;
	if (ft_isalpha(n) == 0)
		return (n);
	if (s < 65 || s > 90)
		return (n);
	s += 32;
	return (s);
}
