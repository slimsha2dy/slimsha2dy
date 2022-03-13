/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 20:49:09 by hwichoi           #+#    #+#             */
/*   Updated: 2022/02/22 15:23:51 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	long long	i;
	long long	size;
	int			*buf;

	size = (long long)max - (long long)min;
	if (size <= 0)
	{
		*range = 0;
		return (0);
	}
	buf = (int *)malloc(sizeof(int) * (size + 1));
	if (!buf)
	{
		*range = 0;
		return (-1);
	}
	i = 0;
	while (i < size)
		buf[i++] = min++;
	buf[i] = '\0';
	*range = buf;
	return (i);
}
