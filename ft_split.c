/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsoto-ga <dsoto-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 14:31:49 by dsoto-ga          #+#    #+#             */
/*   Updated: 2026/06/11 15:59:51 by dsoto-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*ft_get_word(char const *str, char c)
{
	int		len;

	len = 0;
	while (str[len] && str[len] != c)
		len++;
	return (ft_substr(str, 0, len));
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		n_words;
	int		j;

	if (!s)
		return (NULL);
	n_words = ft_count_words(s, c);
	result = malloc((n_words + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	j = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			result[j] = ft_get_word(s, c);
			j++;
			while (*s && *s != c)
				s++;
		}
	}
	result[j] = NULL;
	return (result);
}

// int	main(void)
// {
// 	char	*str = "Hola soy David";
// 	char	**word_array = ft_split(str, ' ');
// 	int		i = 0;

// 	while (word_array[i])
// 	{
// 		printf("%s\n", word_array[i]);
// 		free(word_array[i]);
// 		i++;
// 	}
// 	free(word_array);
// 	return (0);
// }
