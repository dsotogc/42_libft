/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoto-ga <dsoto-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 12:34:41 by dsoto-ga          #+#    #+#             */
/*   Updated: 2026/06/07 13:35:11 by dsoto-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*src_c;
	char	*dst_c;
	size_t	i;

	dst_c = (char *) dest;
	src_c = (char *) src;
	i = 0;
	if (dst_c > src_c)
	{
		while (n-- > 0)
			dst_c[n] = src_c[n];
	}
	else
	{
		while (i < n)
		{
			dst_c[i] = src_c[i];
			i++;
		}
	}
	return (dest);
}
