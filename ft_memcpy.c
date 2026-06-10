/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoto-ga <dsoto-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 11:45:44 by dsoto-ga          #+#    #+#             */
/*   Updated: 2026/06/07 12:35:07 by dsoto-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*src_c;
	size_t				i;

	i = 0;
	d = (unsigned char *) dest;
	src_c = (const unsigned char *) src;
	while (i < n)
	{
		d[i] = src_c[i];
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	mem1[5] = "Hola";
// 	char	mem2[9] = "Que pasa";

// 	ft_memcpy(mem2, mem1, 4);
// 	printf("%s", mem2);
// 	return (0);
// }