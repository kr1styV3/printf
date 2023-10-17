/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 23:31:57 by chrlomba          #+#    #+#             */
/*   Updated: 2023/10/10 23:37:08 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(*node));
	if (node == NULL)
		return (NULL);
	node -> content = (char *)content;
	node -> next = NULL;
	return (node);
}
