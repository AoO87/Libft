/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrowe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 21:57:31 by mrowe             #+#    #+#             */
/*   Updated: 2022/03/17 17:19:42 by mrowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	find_start(const char *s1, const char *set)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				len++;
				break ;
			}
			j++;
			if (!set[j])
				return (len);
		}
		i++;
	}
	return (len);
}

int	find_end(const char *s1, const char *set)
{
	int	i;
	int	j;
	int	len;

	i = ft_strlen(s1) - 1;
	len = 0;
	while (i >= 0)
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				len++;
				break ;
			}
			j++;
			if (!set[j])
				return (len);
		}
		i--;
	}
	return (len);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char		*trimmed;
	size_t		f;
	int			b;
	int			i;

	f = find_start(s1, set);
	b = find_end(s1, set);
	if (f == ft_strlen(s1))
		trimmed = (char *)malloc(sizeof trimmed * 1);
	else
		trimmed = (char *)malloc(sizeof(char) * (ft_strlen(s1) - (f + b) + 1));
	if (!trimmed)
		return (NULL);
	i = 0;
	while (s1[i + b + f])
	{
		trimmed[i] = s1[i + f];
		i++;
	}
	trimmed[i] = '\0';
	return (trimmed);
}
