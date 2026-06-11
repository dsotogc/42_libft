/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoto-ga <dsoto-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 17:30:52 by dsoto-ga          #+#    #+#             */
/*   Updated: 2026/06/11 17:46:29 by dsoto-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_str;
	int		i;

	new_str = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	i = 0;
	while (s[i])
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

// char	ft_cipher(unsigned int i, char c)
// {
//     if (c >= 'a' && c <= 'z')
//         return ('a' + (c - 'a' + i) % 26);
//     return (c);
// }

// int main(void)
// {
//     char *result = ft_strmapi("abcd", ft_cipher);
//     printf("%s\n", result);
//     free(result);
//     return (0);
// }