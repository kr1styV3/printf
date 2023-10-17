/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:30:12 by chrlomba          #+#    #+#             */
/*   Updated: 2023/10/10 13:30:14 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	uc;

	ptr = (unsigned char *) s;
	uc = (unsigned char) c;
	while (n--)
	{
		*ptr++ = uc;
	}
	return (s);
}
/*
#include <stdio.h>
#include <stddef.h>
int main() {
    char str[20];
    size_t size = 10;
    int character = 'a';


    ft_memset(str, character, size);


    for (size_t i = 0; i < sizeof(str) - 10; ++i) {
        printf(" ");
        printf("%c", str[i]);
        printf(",");
    }

    return 0;
}
*/
