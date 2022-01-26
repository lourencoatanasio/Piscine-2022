/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 12:14:17 by ldiogo            #+#    #+#             */
/*   Updated: 2022/01/24 16:55:57 by ldiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] <= 122) && (str[i] >= 97))
			i++;
		else
			return (0);
	}
	return (1);
}

/*#include <stdio.h>

int main()
{
	int a;
	char *str;
	str = "ola";
	a = ft_str_is_lowercase(str);
	printf("a = %d", a);
}*/
