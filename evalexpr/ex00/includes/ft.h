/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 10:29:20 by dmilan            #+#    #+#             */
/*   Updated: 2020/08/09 19:20:03 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <stdlib.h>
# include <unistd.h>

void	ft_putnbr(int nbr);
void	ft_putstr(char *str);
void	ft_putchar(char c);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
char	*ft_itoa(int nbr);
char	**ft_split(char *str);
int		count_words(char *str);
char	*ft_strncpy(char *str, int n);
int		is_number(char *str);

#endif
