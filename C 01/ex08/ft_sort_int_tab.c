/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 12:29:51 by ldiogo            #+#    #+#             */
/*   Updated: 2022/01/19 17:47:34 by ldiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	n1;
	int	n2;
	int	temp;

	n1 = 0;
	while (n1 < size)
	{
		n2 = 0;
		while (n2 < (size - 1))
		{
			if (tab[n2] > tab[n2 + 1])
			{
				temp = tab[n2];
				tab[n2] = tab[n2 + 1];
				tab[n2 + 1] = temp;
			}
			n2++;
		}
		n1++;
	}
}
