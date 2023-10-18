/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:08:08 by chrlomba          #+#    #+#             */
/*   Updated: 2023/10/10 17:25:24 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	count;
	size_t	size;
	char	*tab;

	if (!s)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	size = ft_strlen(s + start);
	if (size < len)
		len = size;
	tab = (char *)malloc((len + 1) * sizeof(char));
	if (!(tab))
		return (NULL);
	count = 0;
	while (count < len)
	{
		tab[count] = s[start + count];
		count++;
	}
	tab[count] = '\0';
	return (tab);
}
/*
int	main(void)
{
	char input[100];
    unsigned int start;
    size_t len;

    printf("Enter a string: ");
    scanf("%s", input);

    printf("Enter the start index: ");
    scanf("%u", &start);

    printf("Enter the length of the substring: ");
    scanf("%zu", &len);

    char *result = ft_substr(input, start, len);
    if (result == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Substring: %s\n", result);

    // Don't forget to free the allocated memory
    free(result);

    return 0;
}
*/
