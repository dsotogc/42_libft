/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoto-ga <dsoto-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 15:22:24 by dsoto-ga          #+#    #+#             */
/*   Updated: 2026/06/09 16:29:16 by dsoto-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr_1;
	unsigned char	*ptr_2;
	size_t			i;

	ptr_1 = (unsigned char *) s1;
	ptr_2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (ptr_1[i] != ptr_2[i])
			return (ptr_1[i] - ptr_2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	int result = ft_memcmp("Hpa", "Hpla", 4);
// 	printf("%d", result);
// }
