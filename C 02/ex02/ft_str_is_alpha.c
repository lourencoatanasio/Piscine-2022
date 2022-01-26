/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 14:33:05 by ldiogo            #+#    #+#             */
/*   Updated: 2022/01/24 17:39:00 by ldiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 65) || (str[i] > 90 && str[i] < 97) || (str[i] > 122))
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>
int main()
{
	int a;
	char *str;
	str = "o  a";
	a = ft_str_is_alpha(str);
	printf("a = %d", a);
}*/
