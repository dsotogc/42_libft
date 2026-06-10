/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoto-ga <dsoto-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 16:17:09 by dsoto-ga          #+#    #+#             */
/*   Updated: 2026/06/10 16:42:40 by dsoto-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	s_len;
	char	*new_str;

	s_len = ft_strlen(s) + 1;
	new_str = malloc(s_len * sizeof(char));
	if (!new_str)
		return (NULL);
	ft_strlcpy(new_str, s, s_len);
	return (new_str);
}
