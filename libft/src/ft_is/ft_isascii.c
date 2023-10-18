/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:07:58 by chrlomba          #+#    #+#             */
/*   Updated: 2023/10/10 13:07:59 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isascii(int n)
{
	return (n >= 0 && n < 128);
}
/*
#include <stdio.h>
#include <ctype.h>
int main(void)
{
    int n = -1;
    n = ft_isascii(n);
        printf("la mia funzione : %i", n);
        printf("\n");
     n = -1;
    n = isascii(n);
    printf("la funzione libreria : %i", n);


}
*/
