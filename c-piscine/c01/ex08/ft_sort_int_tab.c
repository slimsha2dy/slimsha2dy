/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 20:42:02 by hwichoi           #+#    #+#             */
/*   Updated: 2022/02/07 13:42:38 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_two(int *tab, int rep)
{
	int	cnt;
	int	tmp;

	cnt = 0;
	while (cnt <= rep - 1)
	{
		if (tab[cnt] > tab[cnt + 1])
		{
			tmp = tab[cnt];
			tab[cnt] = tab[cnt + 1];
			tab[cnt + 1] = tmp;
		}
		cnt++;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i <= size - 2)
	{
		ft_sort_two(tab, size - i - 1);
		i++;
	}
}
