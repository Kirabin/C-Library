/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmagali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 11:55:52 by zmagali           #+#    #+#             */
/*   Updated: 2020/03/15 12:10:31 by zmagali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int length;

	length = 0;
	while (*str)
	{
		length++;
		str++;
	}
	return (length);
}

int		validate_ch(char *str)
{
	if (ft_strlen(str) != 9)
		return (0);
	while (*str)
	{
		if ((*str >= '1' && *str <= '9') || (*str == '.'))
			str++;
		else
			return (0);
	}
	return (1);
}

int		validate_input(int argc, char **argv)
{
	int index;

	index = 0;
	if (argc != 9)
		return (0);
	while (index < 9)
	{
		if (!(validate_ch(argv[index])))
			return (0);
		index++;
	}
	return (1);
}
