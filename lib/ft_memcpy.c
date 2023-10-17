/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:22:48 by chrlomba          #+#    #+#             */
/*   Updated: 2023/10/10 13:22:50 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*new_dest;
	unsigned char	*new_src;
	size_t			i;

	if (!dest && !src)
		return (0);
	new_dest = dest;
	new_src = (unsigned char *)src;
	i = 0;
	while (i++ < n)
		*new_dest++ = *new_src++;
	return (dest);
}
/*
#include <stdio.h>
#include <stddef.h>

int main() {
    int src[] = {1, 42, 3, 43, 77, 99, 99, 255};
    int dest[7];
    size_t n = sizeof(src) / sizeof(src[0]);

    ft_memcpy(dest, src, n * sizeof(int));

    printf("Copied Array: ");
    for (size_t i = 0; i < n; ++i) {
        printf("%d ", dest[i]);
    }

    return 0;
}
*/
