/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 15:50:51 by dmilan            #+#    #+#             */
/*   Updated: 2020/03/10 20:07:08 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int index;
	int i;

	index = 0;
	i = 0;
	while (dest[index])
		index++;
	while (*src && i++ < nb)
		dest[index++] = *src++;
	dest[index] = '\0';
	return (dest);
}
