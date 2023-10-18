/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <chrlomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:33:09 by chrlomba          #+#    #+#             */
/*   Updated: 2023/10/18 14:19:37 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


unsigned int	ft_strlcat(char *dst, const char *src, unsigned int dstsize)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	r;

	i = 0;
	j = 0;
	r = 0;
	while (dst[i])
		i++;
	while (src[r])
		r++;
	if (dstsize <= i)
		r += dstsize;
	else
		r += i;
	while (src[j] && i + 1 < dstsize)
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (r);
}
