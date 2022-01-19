/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 21:23:44 by ldiogo            #+#    #+#             */
/*   Updated: 2022/01/19 17:46:43 by ldiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	i;

	i = 0;
	while (i < size)
	{
		a = tab[(size - 1)];
		tab[(size - 1)] = tab[i];
		tab[i] = a;
		size--;
		i++;
	}
}
