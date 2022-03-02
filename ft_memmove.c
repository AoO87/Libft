/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrowe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:21:53 by mrowe             #+#    #+#             */
/*   Updated: 2021/11/08 13:22:03 by mrowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;
	
	if (dst > src)
	{
		i = (int)len - 1;
		while (i >= 0)
		{
			*((char *)(dst + i)) = *((char *)(src + i));
			i--;
		}
	}
	else
	{
		ft_memcpy(dst, src, len);
	}
	return(dst);
}