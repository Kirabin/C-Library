/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 09:49:34 by dmilan            #+#    #+#             */
/*   Updated: 2020/08/09 18:45:03 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putstr(char *str);
char	*ft_strncpy(char *str, int n);
int		ft_strlen(char *str);

char	*skip_delimiters(char *str)
{
	while (*str == ' ')
		str++;
	return (str);
}

int		next_delimiter(char *str)
{
	int i;

	i = 0;
	if (*str == '(' || *str == ')')
		return (1);
	while ((*str != ' ' && *str != ')') && *str)
	{
		str++;
		i++;
	}
	return (i);
}

char	*next_oper(char *str)
{
	if (*str == '(')
		return (str + 1);
	str++;
	if (*str == '-')
		str++;
	while ('0' <= *str && *str <= '9')
		str++;
	return (str);
}

int		count_words(char *str)
{
	int		count;
	int		i;
	int		is_start;

	count = 0;
	i = -1;
	is_start = 1;
	while (str[++i])
	{
		if (str[i] == ' ')
			is_start = 1;
		else
		{
			if (is_start)
			{
				count++;
				is_start = 0;
			}
		}
		if (str[i] == '(' || str[i] == ')')
			count++;
	}
	return (count);
}

char	**ft_split(char *str)
{
	char	**res;
	int		words_count;
	int		word_len;
	int		i;

	i = -1;
	words_count = count_words(str);
	res = malloc(sizeof(char*) * (words_count + 1));
	word_len = 0;
	while (++i < words_count)
	{
		str = skip_delimiters(str);
		word_len = next_delimiter(str);
		res[i] = ft_strncpy(str, word_len);
		str = next_oper(str);
	}
	res[words_count] = NULL;
	return (res);
}
