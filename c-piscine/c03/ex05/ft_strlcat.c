/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 20:21:42 by hwichoi           #+#    #+#             */
/*   Updated: 2022/02/14 15:43:49 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	cnt;
	unsigned int	i;
	unsigned int	len;

	cnt = 0;
	i = 0;
	while (dest[cnt] != '\0')
		cnt++;
	len = cnt;
	if (cnt < size)
	{
		while (cnt + 1 < size && src[i] != '\0')
			dest[cnt++] = src[i++];
		dest[cnt] = '\0';
		while (src[i] != '\0')
			i++;
		return (len + i);
	}
	while (src[i] != '\0')
		i++;
	return (size + i);
}
