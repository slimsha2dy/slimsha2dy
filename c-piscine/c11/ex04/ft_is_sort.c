/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 12:13:04 by hwichoi           #+#    #+#             */
/*   Updated: 2022/02/24 17:11:30 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	cnt1;
	int	cnt2;

	i = 0;
	cnt1 = 0;
	cnt2 = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) >= 0)
			cnt1++;
		if (f(tab[i], tab[i + 1]) <= 0)
			cnt2++;
		i++;
	}
	if (cnt1 == i || cnt2 == i)
		return (1);
	return (0);
}
