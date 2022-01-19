/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 14:38:29 by ldiogo            #+#    #+#             */
/*   Updated: 2022/01/17 10:49:41 by ldiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void	rush(int x, int y)
{
	int	lar;
	int	alt;

	alt = 1;
	while (alt <= y && x > 0)
	{
		lar = 1;
		while (lar <= x)
		{
			if ((alt == 1 && lar == 1) || (alt == y && lar == x))
				ft_putchar('/');
			else if ((lar == 1 && alt == y) || (lar == x && alt == 1))
				ft_putchar('\\');
			else if ((lar == 1) || (alt == 1) || (alt == y) || (lar == x))
				ft_putchar('*');
			else
				ft_putchar(' ');
		lar++;
		}
		ft_putchar('\n');
	alt++;
	}
}
