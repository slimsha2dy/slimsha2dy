/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_height.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:32:18 by hwichoi           #+#    #+#             */
/*   Updated: 2022/02/13 14:32:19 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	check_col_up(int *skymap, int *input)
{
	int		i;
	int		j;
	int		count;
	int		flag;

	i = -1;
	while (++i < 4)
	{
		j = 0;
		count = 0;
		flag = 0;
		while ((j + i) <= (12 + i))
		{
			if (flag < skymap[j + i])
			{
				count++;
				flag = skymap[i + j];
			}
			j += 4;
		}
		if (count != input[i])
			return (0);
	}
	return (1);
}

int	check_col_down(int *skymap, int *input)
{
	int		i;
	int		j;
	int		count;
	int		flag;

	i = -1;
	while (++i < 4)
	{
		flag = 0;
		j = 12 + i;
		count = 0;
		while (j >= 0 + i)
		{
			if (flag < skymap[j])
			{
				count++;
				flag = skymap[j];
			}
			j -= 4;
		}
		if (count != input[i])
			return (0);
	}
	return (1);
}

int	check_row_left(int *skymap, int *input)
{
	int		i;
	int		j;
	int		count;
	int		flag;

	i = -1;
	while (++i < 4)
	{
		count = 0;
		flag = 0;
		j = 4 * i;
		while (j <= 3 + 4 * i)
		{
			if (flag < skymap[j])
			{
				count++;
				flag = skymap[j];
			}
			j += 1;
		}
		if (count != input[i])
			return (0);
	}
	return (1);
}

int	check_row_right(int *skymap, int *input)
{
	int		i;
	int		j;
	int		count;
	int		flag;

	i = -1;
	while (++i < 4)
	{
		count = 0;
		flag = 0;
		j = 3 + 4 * i;
		while (j >= 4 * i)
		{
			if (flag < skymap[j])
			{
				count++;
				flag = skymap[j];
			}
			j -= 1;
		}
		if (count != input[i])
			return (0);
	}
	return (1);
}

int	check_height(int *skymap, int *input)
{
	int		arr1[4];
	int		arr2[4];
	int		arr3[4];
	int		arr4[4];
	int		i;

	i = -1;
	while (++i < 4)
	{
		arr1[i] = input[i];
		arr2[i] = input[i + 4];
		arr3[i] = input[i + 8];
		arr4[i] = input[i + 12];
	}
	if (check_col_up(skymap, arr1) && check_col_down(skymap, arr2)
		&& check_row_left(skymap, arr3)
		&& check_row_right(skymap, arr4))
		return (1);
	return (0);
}
