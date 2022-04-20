/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrowe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 21:57:36 by mrowe             #+#    #+#             */
/*   Updated: 2022/03/17 17:37:40 by mrowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	unsigned int			i;
	unsigned int			j;
	char					*substr;

	i = 0;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	j = start;
	if (!substr)
	{
		return (NULL);
	}
	while (start < ft_strlen(s) && i < len && s[j])
	{
		substr[i] = s[j];
		i++;
		j++;
	}
	substr[i] = '\0';
	return (substr);
}
