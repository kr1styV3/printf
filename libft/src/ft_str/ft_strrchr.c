/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:11:03 by chrlomba          #+#    #+#             */
/*   Updated: 2023/10/10 15:15:09 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	ptr = NULL;
	while (*s)
	{
		if (*s == (unsigned char)c)
			ptr = (char *)s;
		s++;
	}
	if (c == 0)
		return ((char *)s);
	return (ptr);
}
/*
int	main(void)
{
	const char	*s;
	const char	*x;

	s = "ciao";
	x = ft_strrchr(s, 'i' + 85);
	if (x != NULL)
	{
		while (*x != '\0')
		{
			write(1, x, 1);
			x++;
		}
	}
	else
	{
		write(1, "Character not found\n", 19);
	}


}
*/
