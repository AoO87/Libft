/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrowe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:52:21 by mrowe             #+#    #+#             */
/*   Updated: 2022/03/03 23:19:03 by mrowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*s;
	int		len;

	len = (ft_strlen(src) + 1);
	s = malloc(len);
	if (!s)
	{
		return (NULL);
	}
	ft_strlcpy(s, src, len);
	return (s);
}
