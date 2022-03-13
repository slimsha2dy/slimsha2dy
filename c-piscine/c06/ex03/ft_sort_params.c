/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:43:52 by hwichoi           #+#    #+#             */
/*   Updated: 2022/02/17 18:10:52 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

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

int	main(int ac, char **av)
{
	int		i;
	int		j;
	char	*str;

	i = 1;
	while (i < ac - 1)
	{
		j = i + 1;
		while (j < ac)
		{
			if (ft_strcmp(av[i], av[j]) > 0)
			{
				str = av[i];
				av[i] = av[j];
				av[j] = str;
			}
			j++;
		}
		i++;
	}
	i = 0;
	while (++i < ac)
		ft_putstr(av[i]);
	return (0);
}
