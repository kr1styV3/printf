/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:09:44 by chrlomba          #+#    #+#             */
/*   Updated: 2023/10/10 13:09:47 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isdigit(int n)
{
	return (n >= '0' && n <= '9');
}
/*
#include <stdio.h>
#include <ctype.h>
int main(void)
{
    int n = '0';
    n = ft_isdigit(n);
        printf("la mia funzione : %i", n);
        printf("\n");
     n = '0';
    n = isdigit(n);
    printf("la funzione libreria : %i", n);


}
*/
