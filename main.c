/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <dmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 10:05:03 by dmilan            #+#    #+#             */
/*   Updated: 2020/11/17 18:54:53 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char	*line;
	int		fd;
	int		ret;

	fd = open("file", O_RDONLY);
	while ((ret = get_next_line(fd, &line)) > 0)
	{
		ft_putnbr_fd(ret, 1);
		ft_putstr_fd(": ", 1);
		ft_putendl_fd(line, 1);
		free(line);
	}
	close(fd);
	free(line);
	return (0);
}
