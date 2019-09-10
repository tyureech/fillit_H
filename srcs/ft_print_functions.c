/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_functions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahasim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 19:30:06 by mmahasim          #+#    #+#             */
/*   Updated: 2019/09/06 19:30:11 by mmahasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_print_array(char **array)
{
	int i;

	i = 0;
	while (array[i] != NULL)
	{
		ft_putstr(array[i]);
		ft_putchar('\n');
		++i;
	}
}

void	ft_print_tetrimino(t_tet *tetrimino)
{
	int i;

	i = 0;
	while (i < 4)
	{
		ft_putnbr(tetrimino->x[i]);
		ft_putchar(' ');
		ft_putnbr(tetrimino->y[i]);
		ft_putchar('\n');
		++i;
	}
	ft_putchar('\n');
}
