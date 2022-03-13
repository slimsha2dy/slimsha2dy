/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 11:58:38 by hwichoi           #+#    #+#             */
/*   Updated: 2022/02/23 20:49:59 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int(*f)(char *))
{
	while (*tab)
	{
		if (f(*tab) != 0)
			return (1);
		tab++;
	}
	return (0);
}
