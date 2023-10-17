/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:24:45 by chrlomba          #+#    #+#             */
/*   Updated: 2023/10/10 15:31:31 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *ptr, int n, size_t j)
{
	unsigned char	*st;
	size_t			i;
	unsigned char	c;

	st = (unsigned char *) ptr;
	c = (unsigned char) n;
	i = 0;
	while (i < j)
	{
		if (*st == c)
			return (st);
		st++;
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	
	char buffer[] = "ciaomamma72";
	int target = 'o';
	size_t size = strlen(buffer);

	// Using your ft_memchr function
	void *your_result = ft_memchr(buffer, target, size);

	// Using the standard library memchr function
	void *stdlib_result = memchr(buffer, target, size);

	printf("Your ft_memchr result: %p\n", your_result);
	printf("Standard memchr result: %p\n", stdlib_result);

	// Compare the results
	if (your_result == stdlib_result) {
		printf("Both functions produced the same result.\n");
	} else {
		printf("Functions produced different results.\n");
	}

	return 0;
}
*/
