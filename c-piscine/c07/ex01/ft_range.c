/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 20:49:09 by hwichoi           #+#    #+#             */
/*   Updated: 2022/02/22 15:23:13 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int			*result;
	long long	i;
	long long	size;

	size = (long long)max - (long long)min;
	if (size <= 0)
		return (0);
	result = (int *)malloc(sizeof(int) * (size + 1));
	i = 0;
	while (i <= size)
		result[i++] = min++;
	result[i] = '\0';
	return (result);
}
