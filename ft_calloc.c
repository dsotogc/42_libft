/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoto-ga <dsoto-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 15:36:37 by dsoto-ga          #+#    #+#             */
/*   Updated: 2026/06/10 16:26:06 by dsoto-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*ptr;
	size_t			total_bytes;

	if (nmemb != 0 && size > (size_t)-1 / nmemb)
		return (NULL);
	total_bytes = nmemb * size;
	if (total_bytes == 0)
		ptr = malloc(1);
	else
		ptr = malloc(total_bytes);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, total_bytes);
	return (ptr);
}

// int	main(void)
// {
// 	int	*arr= (int *) ft_calloc(3, sizeof(int));
// 	if (!arr)
// 	{
// 		printf("Error al asignar memoria!\n");
// 		return (1);
// 	}
// 	printf("%d\n%d\n%d", arr[0], arr[1], arr[2]);
// 	free(arr);
// 	return (0);
// }
