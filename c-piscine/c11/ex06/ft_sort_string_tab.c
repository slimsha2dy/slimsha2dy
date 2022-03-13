/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 19:59:57 by hwichoi           #+#    #+#             */
/*   Updated: 2022/02/23 20:28:02 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	cnt;
	int	chk;

	cnt = 0;
	chk = 0;
	while (s1[cnt] != '\0')
	{
		if (s1[cnt] != s2[cnt])
		{
			chk = s1[cnt] - s2[cnt];
			return (chk);
		}
		cnt++;
	}
	if (s2[cnt] > '\0')
		return (-s2[cnt]);
	return (0);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (tab[i + 1])
	{
		j = i + 1;
		while (tab[j])
		{
			if (ft_strcmp(tab[i], tab[j]) > 0)
			{
				str = tab[i];
				tab[i] = tab[j];
				tab[j] = str;
			}
			j++;
		}
		i++;
	}
}
