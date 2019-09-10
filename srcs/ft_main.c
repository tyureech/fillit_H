/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahasim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 19:29:46 by mmahasim          #+#    #+#             */
/*   Updated: 2019/09/06 19:29:48 by mmahasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	char	*tetrimino;
	char	**solution;

	if (argc != 2)
	{
		ft_putstr("usage: fillit input_file\n");
		return (0);
	}
	tetrimino = ft_extract_tetrimino(argv[1]);
	solution = ft_fillit(tetrimino);
	ft_print_array(solution);
	return (0);
}
