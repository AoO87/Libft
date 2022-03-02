/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrowe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:54:00 by mrowe             #+#    #+#             */
/*   Updated: 2021/11/08 11:54:01 by mrowe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int ch)
{
	int	c;

	if (ch >= 97 && ch <= 122)
	{
		c = ch - 32;
	}
	else
	{
		c = ch;
	}
	return (c);
}