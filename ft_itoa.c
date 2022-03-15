/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrowe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 21:51:53 by mrowe             #+#    #+#             */
/*   Updated: 2022/03/14 21:36:08 by mrowe            ###   ########.fr       */
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
	while (n != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int				num_len;
	char			*number;
	int				i;
	unsigned int	c;

	num_len = find_length(n);
	i = num_len -1;
	number = (char *)malloc(sizeof number * num_len + 1);
	if (!number)
		return (NULL);
	if (n == 0)
		number[i] = '0';
	c = n;
	if (n < 0)
	{
		i++;
		number[0] = '-';
		c = -n;
	}
	while (c)
	{
		number[i--] = (c % 10) + 48;
		c = c / 10;
	}
	return (number);
}
