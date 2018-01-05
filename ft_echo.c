/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_echo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelangh <edelangh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/27 16:13:15 by edelangh          #+#    #+#             */
/*   Updated: 2015/04/27 16:40:59 by edelangh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int		ft_echo(void **a, int size)
{
	int		d;
	char	c;

	a = *a;
	c = (char)(long)a;
	d = (int)(long)a;
	if (size == sizeof(char))
		ft_printf("(%d):(%c)\n", c, c);
	if (size == sizeof(short) || size == sizeof(int))
		ft_printf("(%d)\n", d);
	if (size == sizeof(void*))
		ft_printf("(%s)\n", d);
	return (size);
}
