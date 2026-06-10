/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoto-ga <dsoto-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 16:36:35 by dsoto-ga          #+#    #+#             */
/*   Updated: 2026/06/09 19:08:08 by dsoto-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*little)
		return ((char *) big);
	while (i < len && big[i])
	{
		j = 0;
		while (i + j < len && big[i + j] == little[j])
		{
			j++;
			if (!little[j])
				return ((char *) &big[i]);
		}
		i++;
	}
	return (NULL);
}

/* int	main(void)
{
	char	str1[] = "Hola, soy David";
	char	str2[] = "soy";
	
	printf("%s\n", ft_strnstr(str1, str2, 10));
	return (0);
} */