/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 19:36:25 by hwichoi           #+#    #+#             */
/*   Updated: 2022/02/10 13:20:27 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	cnt;
	int				chk;

	cnt = 0;
	chk = 0;
	while (s1[cnt] != '\0' && cnt < n)
	{
		if (s1[cnt] != s2[cnt])
		{
			chk = s1[cnt] - s2[cnt];
			return (chk);
		}
		cnt++;
	}
	if (cnt < n)
		chk = s1[cnt] - s2[cnt];
	return (chk);
}
