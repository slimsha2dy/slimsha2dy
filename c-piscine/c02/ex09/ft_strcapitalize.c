/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwichoi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 19:12:33 by hwichoi           #+#    #+#             */
/*   Updated: 2022/02/09 14:15:19 by hwichoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	fst_case(char *str, int cnt);

void	sec_case(char *str, int cnt)
{
	if (str[cnt] == '\0')
		return ;
	else if (str[cnt] >= 'A' && str[cnt] <= 'Z')
	{
		str[cnt] = str[cnt] + 32;
		sec_case(str, cnt + 1);
	}
	else if (str[cnt] >= 'a' && str[cnt] <= 'z')
		sec_case(str, cnt + 1);
	else if (str[cnt] >= '0' && str[cnt] <= '9')
		sec_case(str, cnt + 1);
	else
		fst_case(str, cnt + 1);
}

void	fst_case(char *str, int cnt)
{
	if (str[cnt] == '\0')
		return ;
	else if (str[cnt] >= 'a' && str[cnt] <= 'z')
	{
		str[cnt] = str[cnt] - 32;
		sec_case(str, cnt + 1);
	}
	else if (str[cnt] >= 'A' && str[cnt] <= 'Z')
		sec_case(str, cnt + 1);
	else if (str[cnt] >= '0' && str[cnt] <= '9')
		sec_case(str, cnt + 1);
	else
		fst_case(str, cnt + 1);
}

char	*ft_strcapitalize(char *str)
{
	int	cnt;

	cnt = 0;
	fst_case(str, cnt);
	return (str);
}
