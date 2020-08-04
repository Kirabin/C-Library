/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/16 14:28:09 by dmilan            #+#    #+#             */
/*   Updated: 2020/08/03 15:29:19 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_any(char **tab, int(*f)(char*));

int		more_than_five(char *str)
{
	if (*str == '0')
		return (1);
	return (0);

}
int		main(int argc, char **argv)
{
	argv += 1;
	argc += 0;
	printf("%d", ft_any(argv, &more_than_five));
	return (0);
}
