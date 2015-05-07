/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stronly.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelangh <edelangh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/21 14:31:08 by edelangh          #+#    #+#             */
/*   Updated: 2015/03/21 14:34:04 by edelangh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_stronly(char *str, char *only)
{
	int	i;
	int	j;

	i = -1;
	if (!str || !only)
		return (-1);
	while (str[++i])
	{
		j = 0;
		while (only[j] && only[j] != str[i])
			++j;
		if (only[j] != str[i])
			return (0);
	}
	return (1);
}
