/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 16:57:37 by dmilan            #+#    #+#             */
/*   Updated: 2020/08/09 16:53:53 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

#define BUFF 3000000

char	*get_input(void)
{
	char	*input;
	int		bytes;

	bytes = 0;
	input = malloc(sizeof(char) * BUFF);
	bytes = read(0, input, BUFF);
	if (bytes == -1)
		return (NULL);
	input[bytes] = '\0';
	return (input);
}
