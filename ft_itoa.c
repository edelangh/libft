/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelangh <edelangh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 11:02:35 by edelangh          #+#    #+#             */
/*   Updated: 2014/11/12 10:46:01 by edelangh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_int_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		++len;
		n *= -1;
	}
	while (n)
	{
		++len;
		n /= 10;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	char	*s;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_int_len(n);
	s = ft_strnew(len);
	if (n == 0)
		s[0] = '0';
	if (n < 0)
	{
		n *= -1;
		s[0] = '-';
	}
	while (n)
	{
		--len;
		s[len] = '0' + n % 10;
		n /= 10;
	}
	return (s);
}
