/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrowe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 21:50:09 by mrowe             #+#    #+#             */
/*   Updated: 2021/12/16 12:20:29 by mrowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	cx;
	size_t	cntr;

	cx = c;
	cntr = 0;
	while (cntr < len)
	{
		*((char *)b + cntr) = cx;
		cntr++;
	}
	return (b);
}
