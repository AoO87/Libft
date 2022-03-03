/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrowe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 21:57:17 by mrowe             #+#    #+#             */
/*   Updated: 2022/03/02 21:58:06 by mrowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	destlen;

	i = 0;
	destlen = ft_strlen(dest);
	if (size > destlen)
	{
		while (i < (size - destlen - 1) && src[i])
		{
			dest[i + destlen] = src[i];
			i++;
		}
		dest[i + destlen] = '\0';
	}
	while (src[i])
	{
		i++;
	}
	if (size >= destlen)
	{
		return (i + destlen);
	}
	return (i + size);
}
