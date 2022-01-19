/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fi_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 14:04:07 by ldiogo            #+#    #+#             */
/*   Updated: 2022/01/19 10:16:16 by ldiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	y;
	int	x;

	x = -1;
	while (x++ <= 99)
	{
		y = x;
		while (y++ < 99)
		{
			ft_putchar(x / 10 + 48);
			ft_putchar(x % 10 + 48);
			ft_putchar(' ');
			ft_putchar(y / 10 + 48);
			ft_putchar(y % 10 + 48);
			if (!(x == 98 && y == 99))
				ft_putchar(',');
			ft_putchar(' ');
		}
	}
}
