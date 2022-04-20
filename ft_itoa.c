/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrowe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 21:51:53 by mrowe             #+#    #+#             */
/*   Updated: 2022/03/18 14:51:31 by mrowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	find_length(int n)
{
	int	i;

	i = 0;
	if (n == 0)
	{
		i = 1;
		return (i);
	}
	if (n < 0)
		i = 1;
	while (n != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*number;
	int				i;
	unsigned int	c;

	i = find_length(n) - 1;
	number = (char *)malloc(sizeof(char) * (find_length(n) + 1));
	if (!number)
		return (NULL);
	if (n == 0)
		number[i] = '0';
	c = n;
	if (n < 0)
	{
		number[0] = '-';
		c = -n;
	}
	number[i + 1] = '\0';
	while (c)
	{
		number[i--] = (c % 10) + 48;
		c = c / 10;
	}
	return (number);
}
