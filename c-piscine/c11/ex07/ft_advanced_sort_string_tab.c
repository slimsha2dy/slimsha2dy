/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 20:11:33 by hwichoi           #+#    #+#             */
/*   Updated: 2022/02/24 17:21:21 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (tab[i + 1])
	{
		j = 0;
		while (tab[i + j + 1])
		{
			if (cmp(tab[j], tab[j + 1]) > 0)
			{
				str = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = str;
			}
			j++;
		}
		i++;
	}
}
