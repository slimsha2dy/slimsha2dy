/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_input_check.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:08:27 by hwichoi           #+#    #+#             */
/*   Updated: 2022/02/13 14:08:51 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	valid_one(int *input)
{
	int	i;
	int	j;
	int	cnt;

	i = 0;
	while (i < 16)
	{
		cnt = 0;
		j = -1;
		while (++j < 4)
		{
			if (input[i] == 1)
				cnt++;
			i++;
		}
		if (cnt != 1)
			return (0);
	}
	return (1);
}

int	valid_two(int *input)
{
	int	i;
	int	j;
	int	cnt;

	i = 0;
	while (i < 16)
	{
		cnt = 0;
		j = -1;
		while (++j < 4)
		{
			if (input[i] == 2)
				cnt++;
			i++;
		}
		if (cnt == 0)
			return (0);
	}
	return (1);
}

int	valid_four(int *input)
{
	int	i;
	int	j;
	int	cnt;

	i = 0;
	while (i < 16)
	{
		cnt = 0;
		j = -1;
		while (++j < 4)
		{
			if (input[i] == 4)
				cnt++;
			i++;
		}
		if (cnt > 1)
			return (0);
	}
	return (1);
}

int	valid_sum(int *input)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (input[i] + input[i + 4] < 3 || input[i] + input[i + 4] > 5)
			return (0);
		i++;
	}
	i = 8;
	while (i < 12)
	{
		if (input[i] + input[i + 4] < 3 || input[i] + input[i + 4] > 5)
			return (0);
		i++;
	}
	return (1);
}

int	valid_check(int *input)
{
	if (valid_one(input) && valid_two(input) && valid_four(input)
		&& valid_sum(input))
		return (1);
	return (0);
}
