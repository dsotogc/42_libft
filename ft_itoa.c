/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoto-ga <dsoto-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 16:14:43 by dsoto-ga          #+#    #+#             */
/*   Updated: 2026/06/11 17:16:02 by dsoto-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_getlen(int n)
{
	int	len;
	int	tmp;

	len = 0;
	tmp = n;
	if (n <= 0)
		len++;
	while (tmp != 0)
	{
		tmp /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	int		tmp;
	char	*result;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_getlen(n);
	result = malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[len] = '\0';
	tmp = n;
	if (n < 0)
		tmp = n * -1;
	while (len > 0)
	{
		len--;
		result[len] = (tmp % 10) + '0';
		tmp /= 10;
	}
	if (n < 0)
		result[0] = '-';
	return (result);
}

// int	main(void)
// {
// 	int	int1 = 124586;
// 	int	int2 = -785;

// 	printf("%s\n%s\n", ft_itoa(int1), ft_itoa(int2));
// 	return (0);
// }
