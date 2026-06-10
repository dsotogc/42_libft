/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoto-ga <dsoto-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 17:30:34 by dsoto-ga          #+#    #+#             */
/*   Updated: 2026/06/07 17:39:38 by dsoto-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*buf;

	buf = (unsigned char *) s;
	while (n > 0)
	{
		if (*buf == (unsigned char) c)
			return (buf);
		buf++;
		n--;
	}
	return (NULL);
}
