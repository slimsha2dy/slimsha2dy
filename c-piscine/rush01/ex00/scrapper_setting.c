/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scrapper_setting.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:09:12 by hwichoi           #+#    #+#             */
/*   Updated: 2022/02/13 14:47:42 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	col_down_set(int *skymap, int *input)
{
	int		i;

	i = -1;
	while (++i < 4)
	{
		if (input[4 + i] == 4 && input[0 + i] == 1)
		{
			skymap[0 + i] = 4;
			skymap[4 + i] = 3;
			skymap[8 + i] = 2;
			skymap[12 + i] = 1;
		}
		if (input[4 + i] == 3 && input[0 + i] == 2)
			skymap[4 + i] = 4;
		if (input[4 + i] == 2 && input[0 + i] == 1)
		{
			skymap[0 + i] = 4;
			skymap[12 + i] = 3;
		}
		if (input[4 + i] == 1)
			skymap[i + 12] = 4;
	}
}

void	col_up_set(int *skymap, int *input)
{
	int		i;

	i = -1;
	while (++i < 4)
	{
		if (input[0 + i] == 4 && input[4 + i] == 1)
		{
			skymap[0 + i] = 1;
			skymap[4 + i] = 2;
			skymap[8 + i] = 3;
			skymap[12 + i] = 4;
		}
		if (input[0 + i] == 3 && input[4 + i] == 2)
			skymap[8 + i] = 4;
		if (input[0 + i] == 2 && input[4 + i] == 1)
		{
			skymap[0 + i] = 3;
			skymap[12 + i] = 4;
		}
		if (input[0 + i] == 1)
		{
			skymap[0 + i] = 4;
		}
	}
}

void	row_left_set(int *skymap, int *input)
{
	int		i;

	i = -1;
	while (++i < 4)
	{
		if (input[8 + i] == 4 && input[12 + i] == 1)
		{
			skymap[0 + 4 * i] = 1 ;
			skymap[1 + 4 * i] = 2;
			skymap[2 + 4 * i] = 3;
			skymap[3 + 4 * i] = 4;
		}
		if (input[8 + i] == 3 && input[12 + i] == 2)
			skymap[2 + 4 * i] = 4;
		if (input[8 + i] == 2 && input[12 + i] == 1)
		{
			skymap[0 + 4 * i] = 3;
			skymap[3 + 4 * i] = 4;
		}
		if (input[8 + i] == 1)
			skymap[0 + 4 * i] = 4;
	}
}

void	row_right_set(int *skymap, int *input)
{
	int		i;

	i = -1;
	while (++i < 4)
	{
		if (input[12 + i] == 4 && input[8 + i] == 1)
		{
			skymap[0 + 4 * i] = 4;
			skymap[1 + 4 * i] = 3;
			skymap[2 + 4 * i] = 2;
			skymap[3 + 4 * i] = 1;
		}
		if (input[12 + i] == 3 && input[8 + i] == 2)
			skymap[1 + 4 * i] = 4;
		if (input[12 + i] == 2 && input[8 + i] == 1)
		{
			skymap[3 + 4 * i] = 3;
			skymap[0 + 4 * i] = 4;
		}
		if (input[12 + i] == 1)
			skymap[3 + 4 * i] = 4;
	}
}

int	scrapper_setting(int *input)
{
	int		skymap[16];
	int		i;
	int		error;

	i = -1;
	error = 0;
	while (++i < 16)
		skymap[i] = 0;
	col_up_set(skymap, input);
	col_down_set(skymap, input);
	row_left_set(skymap, input);
	row_right_set(skymap, input);
	recursive(skymap, 0, input, &error);
	return (error);
}
