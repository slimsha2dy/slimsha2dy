/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 19:43:40 by hwichoi           #+#    #+#             */
/*   Updated: 2022/02/10 13:34:13 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	cnt;
	unsigned int	i;

	cnt = 0;
	i = 0;
	while (dest[cnt] != '\0')
		cnt++;
	while (i < nb && src[i] != '\0')
	{
		dest[cnt] = src[i];
		cnt++;
		i++;
	}
	dest[cnt] = '\0';
	return (dest);
}
