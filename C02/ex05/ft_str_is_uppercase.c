/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 12:10:03 by ldiogo            #+#    #+#             */
/*   Updated: 2022/01/23 13:20:10 by ldiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			i++;
		if ((str[i] <= 90) && (str[i] >= 65))
			i++;
		else
			return (0);
	}
	return (1);
}
/*#include <stdio.h>
int	main()
{
	int a;
	char *str;
	str = "OL2";

	ft_str_is_uppercase(str);
	printf("a = %d", ft_str_is_uppercase(str));
}*/
