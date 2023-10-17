/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:19:39 by chrlomba          #+#    #+#             */
/*   Updated: 2023/10/10 13:19:40 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
int main(void)
{
    int n = 32;
    n = ft_isprint(n);
        printf("la mia funzione : %i", n);
        printf("\n");
     n = 32;
    n = isprint(n) ? 1 : 0;
    printf("la funzione libreria : %i", n);


}
*/
