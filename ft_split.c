/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrowe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 21:57:06 by mrowe             #+#    #+#             */
/*   Updated: 2022/04/20 21:15:53 by mrowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	wordcount(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
		{
			count++;
		}
		i++;
	}
	count++;
	return (count);
}

char	*separate(const char *s, char c)
{
	int		i;
	char	*replacement;

	i = 0;
	replacement = (char *)malloc(sizeof (char) * ft_strlen(s) + 1);
	while (s[i])
	{
		if (s[i] == c)
		{
			replacement[i] = '\0';
		}
		else
		{
			replacement[i] = s[i];
		}
		i++;
	}
	return (replacement);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**result;
	char	*str;

	k = 0;
	i = 0;
	result = (char **)malloc(sizeof (char *) * wordcount(s, c) + 1);
	if (!result)
		return (NULL);
	str = separate(s, c);
	while (s[k])
	{
		while (s[k] == c)
			k++;
		j = k;
		while (s[k] && s[k] != c)
			k++;
		if (k > j)
			result[i] = ft_strdup(str + j);
		i++;
	}
	result[i] = NULL;
	return (result);
}
