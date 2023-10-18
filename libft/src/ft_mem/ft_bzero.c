/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:30:04 by chrlomba          #+#    #+#             */
/*   Updated: 2023/10/10 12:30:10 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//#include <stddef.h>
//#include <stdio.h>
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
	{
		*ptr++ = 0;
	}
}
/*
int main() {
    char str[10]; 

    
    ft_bzero(str, sizeof(str));

    for (size_t i = 0; i < sizeof(str); ++i) {
        printf("%d ", str[i]);
    }

    return 0;
}
*/
