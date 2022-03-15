/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrowe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 21:53:02 by mrowe             #+#    #+#             */
/*   Updated: 2022/03/13 20:15:23 by mrowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && !(s1[i] == '\0' && s2[i] == '\0'))
	{
		if (s1[i] != s2[i])
		{
			return (((unsigned char) s1[i]) - ((unsigned char) s2[i]));
		}
		i++;
	}
	return (0);
}
