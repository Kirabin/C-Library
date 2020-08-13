/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 15:07:42 by dmilan            #+#    #+#             */
/*   Updated: 2020/03/15 16:26:14 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		combinations(int target, int candidates)

int		nmatch(char *s1, char *s2)
{
	int target;
	int candidates;
	int i;
	
	printf("s1 : %s\n", s1);
	printf("s2 : %s\n\n", s2);	
	if (*s2 == '*' && *(s2 + 1) == '*')
		return (match(s1, s2 + 1));
	if ((*s2 == '*' && *(s2 + 1) == '\0') || (*s1 == '\0' && *s2 == '\0'))
		return (1);
	if (*s1 == '\0' || *s2 == '\0')
		return (0);
	if (*s2 == *s1)
		return (match(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (match(s1, s2 + 1) || match(s1 + 1, s2));
	return (0);
}
