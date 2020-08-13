/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 18:30:51 by dmilan            #+#    #+#             */
/*   Updated: 2020/03/06 19:41:23 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str) 
{
	char	*str_start;
	char	*str_start_cp;
	char	swap;
	int		str_len;

	str_start = str;
	str_start_cp = str;
	str_len = 0;
	while ( *str++ != '\0')
		str_len++;

	str -= 2;
	while (str_start_cp < str)
	{
		swap = *str_start_cp;
		*str_start_cp = *str;
		*str = swap;
	}

	return str_start;
}
