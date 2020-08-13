/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 18:48:27 by dmilan            #+#    #+#             */
/*   Updated: 2020/03/10 19:27:39 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int flag;

	i = -1;
	while (str[++i] != '\0')
	{
		j = -1;
		flag = 1;
		while (to_find[++j] != '\0')
		{
			if (str[i + j] == '\0')
				return (0);
			if (str[i + j] != to_find[j])
			{
				flag = 0;
			}
		}
		if (flag)
			return (str + i);
	}
	return (0);
}
