/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 15:07:54 by dmilan            #+#    #+#             */
/*   Updated: 2020/03/15 15:28:20 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		match(char *s1, char *s2);
//int		is_one_in_another(char *str, char *to_find);

int		main(int argc, char **argv)
{
	argc += 0;
	printf("First arg  : \"%s\"\n", argv[1]);
	printf("Second arg : \"%s\"\n", argv[2]);

	//argv[1] = "abcdlertleHELLO";
	//argv[2] = "*abcd*leHE***LLO**";

	printf("\nMatches : %d\n", match(argv[1], argv[2]));
	//printf("\nIs one in another: %d\n", is_one_in_another(argv[1], argv[2]));

	return (0);
}
