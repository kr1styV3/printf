/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrlomba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 21:38:50 by chrlomba          #+#    #+#             */
/*   Updated: 2023/10/10 21:55:31 by chrlomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	char				*res;

	if (s == NULL || f == NULL)
		return (NULL);
	i = 0;
	res = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (res == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		res[i] = f(i, s[i]);
		++i;
	}
	res[i] = '\0';
	return (res);
}
/*
char custom_function(unsigned int index, char c)
{
    // This custom function simply converts lowercase letters to uppercase
    
    return c - 17;
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char));

int main(void)
{
    const char *input_string = "Hello, World!";
    printf("Original string: %s\n", input_string);

    // Applying ft_strmapi function with the custom_function
    char *result = ft_strmapi(input_string, custom_function);
    
    custom_function(0, 'z');

    if (result != NULL)
    {
        printf("Modified string: %s\n", result);

        // Remember to free the allocated memory
        free(result);
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
*/
