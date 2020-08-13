/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_support.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 11:38:49 by dmilan            #+#    #+#             */
/*   Updated: 2020/08/09 11:40:20 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		get_stack_len(char **strs)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (strs[i])
	{
		if (strs[i][0] != ')' && strs[i][0] != '(')
			len++;
		i++;
	}
	return (len);
}

int		get_oper_stack_len(char **strs)
{
	int len;

	len = 0;
	while (*strs)
	{
		if (**strs >= '9' || **strs <= '0')
			len++;
		strs++;
	}
	return (len);
}

void	print_strs(char **strs)
{
	int i;

	i = 0;
	while (strs[i])
	{
		ft_putstr(strs[i]);
		ft_putstr("  ");
		i++;
	}
	ft_putstr("  ");
}

int		priority(char c)
{
	if (c == '+' || c == '-')
		return (0);
	if (c == '/' || c == '%' || c == '*')
		return (1);
	return (2);
}

char	*evaluate(char *a, char *b, char oper)
{
	int		nbr1;
	int		nbr2;
	int		res;

	nbr1 = ft_atoi(a);
	nbr2 = ft_atoi(b);
	res = 0;
	if (oper == '-')
		res = nbr1 - nbr2;
	else if (oper == '+')
		res = nbr1 + nbr2;
	else if (oper == '/')
		res = nbr1 / nbr2;
	else if (oper == '*')
		res = nbr1 * nbr2;
	else if (oper == '%')
		res = nbr1 % nbr2;
	return (ft_itoa(res));
}
