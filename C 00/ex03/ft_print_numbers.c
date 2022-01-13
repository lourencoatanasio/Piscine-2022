/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 18:03:18 by ldiogo            #+#    #+#             */
/*   Updated: 2022/01/13 18:18:17 by ldiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers(void)

{
	char number;

	number = '0';
	while(number <= '9')
	{
		write(1, &number, 1);
		number++;
	}
}

int main()

{
	ft_print_numbers();
	return 0;
}

