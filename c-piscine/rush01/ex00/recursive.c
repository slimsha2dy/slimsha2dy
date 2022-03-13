/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursive.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:32:00 by hwichoi           #+#    #+#             */
/*   Updated: 2022/02/13 15:01:55 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	putarr(int *skymap, int *error)
{
	int		i;
	int		j;
	char	a;

	i = 0;
	j = 0;
	while (i < 16)
	{
		a = skymap[i] + '0';
		write(1, &a, 1);
		if ((j % 4) == 3)
			write(1, "\n", 1);
		else
			write(1, " ", 1);
		i++;
		j++;
	}
	*error = 1;
}

void	recursive(int *skymap, int level, int *input, int *error)
{
	int		i;

	if (level == 16)
	{
		if (same_col_check(skymap) && same_row_check(skymap)
			&& check_height(skymap, input))
			putarr(skymap, error);
	}
	else
	{
		if (skymap[level] == 0)
		{
			i = 1;
			while (i < 5)
			{
				skymap[level] = i;
				recursive(skymap, level + 1, input, error);
				i++;
			}
			skymap[level] = 0;
		}
		else
			recursive(skymap, level + 1, input, error);
	}	
}
