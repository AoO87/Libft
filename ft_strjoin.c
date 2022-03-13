/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrowe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 21:57:14 by mrowe             #+#    #+#             */
/*   Updated: 2022/03/11 20:10:53 by mrowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		strlen;
	int		i;
	int		j;
	char	*joinstr;

	strlen = ft_strlen(s1) + ft_strlen(s2);
	i = 0;
	j = 0;
	joinstr = (char *)malloc(sizeof joinstr * strlen);
	if (!joinstr)
		return (NULL);
	while (s1[i])
	{
		joinstr[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		joinstr[i] = s2[j];
		i++;
		j++;
	}
	joinstr[i] = '\0';
	return (joinstr);
}
