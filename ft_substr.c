/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoto-ga <dsoto-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 17:06:38 by dsoto-ga          #+#    #+#             */
/*   Updated: 2026/06/10 17:55:37 by dsoto-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	real_len;
	char	*new_str;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	real_len = ft_strlen(s + start);
	if (len < real_len)
		real_len = len;
	new_str = malloc(real_len + 1);
	if (!new_str)
		return (NULL);
	ft_strlcpy(new_str, s + start, real_len + 1);
	return (new_str);
}

// int	main(void)
// {
// 	char	str1[] = "Estudio en 42 Madrid";
// 	char	*str2 = ft_substr(str1, 11, 9);

// 	printf("%s", str2);
// 	free(str2);
// 	return (0);
// }