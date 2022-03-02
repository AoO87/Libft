/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrowe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 21:13:11 by mrowe             #+#    #+#             */
/*   Updated: 2022/03/02 21:58:54 by mrowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t i;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while(i < n)
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
	i++;
	}
	return (str1[i] - str2[i]);
}
