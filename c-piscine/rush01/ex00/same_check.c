/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   same_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:32:07 by hwichoi           #+#    #+#             */
/*   Updated: 2022/02/13 15:06:21 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	same_col_check(int *skymap)
{
	int		i;
	int		j;
	int		k;

	k = 0;
	i = 4;
	while (i <= 16)
	{
		while (k < i)
		{
			j = k + 1;
			while (j < i)
			{
				if (skymap[k] == skymap[j])
					return (0);
				j++;
			}
			k++;
		}
		i = i + 4;
	}
	return (1);
}

int	same_row_check(int *skymap)
{
	int		i;
	int		j;

	i = 0;
	while (i < 12)
	{
		j = i + 4;
		while (j < 16)
		{
			if (skymap[i] == skymap[j])
				return (0);
			j = j + 4;
		}
		i++;
	}
	return (1);
}
