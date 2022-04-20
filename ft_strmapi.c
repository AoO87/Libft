/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrowe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 21:57:25 by mrowe             #+#    #+#             */
/*   Updated: 2022/03/17 17:09:48 by mrowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*resultstr;

	i = 0;
	while (s[i])
	{
		i++;
	}
	resultstr = (char *)malloc(sizeof(char) * (i + 1));
	if (!resultstr)
		return (NULL);
	i = 0;
	while (s[i])
	{
		resultstr[i] = f(i, s[i]);
		i++;
	}
	resultstr[i] = '\0';
	return (resultstr);
}
