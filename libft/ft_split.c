/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtavabil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 11:39:59 by rtavabil          #+#    #+#             */
/*   Updated: 2023/11/09 12:45:33 by rtavabil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	words;
	size_t	flag;

	words = 0;
	flag = 0;
	while (*s)
	{
		if (*s != c && flag == 0)
		{
			flag = 1;
			words++;
		}
		else if (*s == c)
			flag = 0;
		s++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	i;
	int		start;

	res = (char **)malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!s || !res)
		return ((void *)0);
	i = 0;
	start = -1;
	while (i <= ft_strlen(s) && s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != c)
		{
			start = (int)i;
			while (s[i] != c && s[i] != '\0')
				i++;
			if (i - start > 0)
				*res++ = ft_substr(s, start, i - start);
		}	
	}
	*res = (void *)0;
	return (res - ft_count_words(s, c));
}
