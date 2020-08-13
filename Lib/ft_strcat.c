/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 15:14:02 by dmilan            #+#    #+#             */
/*   Updated: 2020/03/10 15:46:40 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int index;

	index = 0;
	while (dest[index])
		index++;
	while (*src)
		dest[index++] = *src++;
	dest[index] = '\0';
	return (dest);
}
