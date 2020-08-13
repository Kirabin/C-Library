/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 09:33:02 by dmilan            #+#    #+#             */
/*   Updated: 2020/03/16 12:05:42 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		match(char *s1, char *s2)
{
	if (*s2 == '*' && *(s2 + 1) == '*')
		return (match(s1, s2 + 1));
	if (*s2 == '*' && *(s2 + 1) == '\0')
		return (1);
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == '\0' || *s2 == '\0')
		return (0);
	if (*s2 == *s1)
		return (match(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (match(s1, s2 + 1) || match(s1 + 1, s2));
	return (0);
}

int	main(void)
{
	printf("%d\n",match("tutututut*tu", "*tu"));
			return (0);
}
