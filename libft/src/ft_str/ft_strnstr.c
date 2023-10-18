/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:51:15 by chrlomba          #+#    #+#             */
/*   Updated: 2023/10/10 15:51:17 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *h, const char *needle, size_t len)
{
	size_t	c;

	if (*needle == 0 || h == needle)
		return ((char *)h);
	c = ft_strlen(needle);
	while (*h && c <= len--)
	{
		if (!(ft_strncmp((char *)h, (char *)needle, c)))
			return ((char *)h);
		h++;
	}
	return (NULL);
}
