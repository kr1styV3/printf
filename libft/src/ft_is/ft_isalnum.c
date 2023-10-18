/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:33:46 by chrlomba          #+#    #+#             */
/*   Updated: 2023/10/10 12:33:48 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int n)
{
	return (ft_isdigit(n) || ft_isalpha(n));
}
/*
#include <stdio.h>
#include <ctype.h>
int main(void)
{
    int n = 'Z';
    n = ft_isalnum(n);
        printf("la mia funzione : %i", n);
        printf("\n");
     n = 'Z';
    n = isalnum(n);
    printf("la funzione libreria : %i", n);


}
*/
