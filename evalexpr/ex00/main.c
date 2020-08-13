/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 21:26:58 by dmilan            #+#    #+#             */
/*   Updated: 2020/08/09 19:20:07 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		get_stack_len(char **strs);
int		get_oper_stack_len(char **strs);
void	print_strs(char **strs);
int		priority(char c);
char	*evaluate(char *a, char *b, char oper);

char	**to_polish_notation(char **strs, char **stack, char **oper_stack,
								int os_pos)
{
	int	s_pos;

	s_pos = 0;
	strs--;
	while (*++strs)
		if (is_number(*strs))
			stack[s_pos++] = *strs;
		else if (**strs == '(')
			oper_stack[++os_pos] = *strs;
		else if (**strs == ')')
		{
			while (oper_stack[os_pos][0] != '(')
				stack[s_pos++] = oper_stack[os_pos--];
			os_pos--;
		}
		else
		{
			while (os_pos != -1 && oper_stack[os_pos][0] != '(' &&
					priority(oper_stack[os_pos][0]) >= priority(**strs))
				stack[s_pos++] = oper_stack[os_pos--];
			oper_stack[++os_pos] = *strs;
		}
	while (os_pos != -1)
		stack[s_pos++] = oper_stack[os_pos--];
	return (stack);
}

char	**to_polish_notation_medium(char **strs)
{
	char	**stack;
	char	**oper_stack;
	int		os_pos;

	os_pos = -1;
	stack = malloc(sizeof(char *) * (get_stack_len(strs) + 1));
	stack[get_stack_len(strs)] = NULL;
	oper_stack = malloc(sizeof(char *) * (get_oper_stack_len(strs)));
	stack = to_polish_notation(strs, stack, oper_stack, os_pos);
	free(oper_stack);
	return (stack);
}

int		shunt_yard_expr(char **strs)
{
	char	**stack;
	int		s_pos;
	int		stack_len;
	int		i;
	int		res;

	s_pos = -1;
	i = -1;
	stack_len = get_stack_len(strs);
	stack = malloc(sizeof(char *) * (stack_len));
	while (strs[++i])
		if (is_number(strs[i]))
			stack[++s_pos] = strs[i];
		else
		{
			stack[s_pos - 1] = evaluate(stack[s_pos - 1],
											stack[s_pos], *strs[i]);
			stack[s_pos--] = NULL;
		}
	res = ft_atoi(stack[0]);
	free(strs);
	free(stack);
	return (res);
}

int		eval_expr(char *str)
{
	char	**pol_not;
	char	**splitted;
	int		res;

	splitted = ft_split(str);
	pol_not = to_polish_notation_medium(splitted);
	res = shunt_yard_expr(pol_not);
	return (res);
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
