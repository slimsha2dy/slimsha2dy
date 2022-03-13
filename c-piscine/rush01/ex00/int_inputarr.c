/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_inputarr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:54:51 by hwichoi           #+#    #+#             */
/*   Updated: 2022/02/13 16:01:25 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_valid_num(char c1, char c2)
{
	if (c1 >= '1' && c1 <= '4')
	{
		if (c2 == ' ' || c2 == '\0' || c2 == '\n' || c2 == '\t')
			return (1);
	}
	return (0);
}

int	is_valid(char *arr)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (arr[i])
	{
		if (arr[i] == ' ' || arr[i] == '\n' || arr[i] == '\t')
			i++;
		else if (is_valid_num(arr[i], arr[i + 1]))
		{
			i++;
			count++;
		}
		else if (!(is_valid_num(arr[i], arr[i + 1])))
			return (1);
		else
			return (1);
	}
	if (count != 16)
		return (1);
	return (0);
}

void	input_arr(int *dest, char *src)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (i < 16)
	{
		if (src[cnt] >= '1' && src[cnt] <= '4')
		{
			dest[i] = src[cnt] - '0';
			i++;
		}
		cnt++;
	}
}

int	*int_inputarr(char *arr)
{
	int	*temp;

	if (is_valid(arr))
		return (0);
	temp = (int *)malloc(sizeof(int) * 4);
	input_arr(temp, arr);
	return (temp);
}
