/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 13:05:02 by hwichoi           #+#    #+#             */
/*   Updated: 2022/02/16 21:44:44 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putint(int *arr)
{
	int		i;
	char	c;

	i = -1;
	while (++i < 10)
	{
		c = arr[i] + '0';
		write(1, &c, 1);
	}
	write(1, "\n", 1);
}

int	is_valid(int *arr, int level)
{
	int	i;
	int	cnt;

	i = -1;
	while (++i < level)
	{
		cnt = i + 1;
		while (cnt < level)
		{
			if (arr[i] == arr[cnt])
				return (0);
			if (cnt - i == arr[cnt] - arr[i] || cnt - i == arr[i] - arr[cnt])
				return (0);
			cnt++;
		}
	}
	return (1);
}

void	queen_recur(int level, int *arr, int *cnt)
{
	int	i;

	i = 0;
	if (level == 10)
	{
		if (is_valid(arr, level))
		{
			putint(arr);
			(*cnt)++;
		}
	}
	else
	{
		while (i <= 9 && is_valid(arr, level))
		{
			arr[level] = i;
			queen_recur(level + 1, arr, cnt);
			i++;
		}
		arr[level] = 0;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	arr[10];
	int	i;

	i = -1;
	while (++i < 10)
		arr[i] = 0;
	i = 0;
	queen_recur(0, arr, &i);
	return (i);
}
