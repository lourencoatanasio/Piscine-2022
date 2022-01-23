/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 14:33:05 by ldiogo            #+#    #+#             */
/*   Updated: 2022/01/23 16:30:35 by ldiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			i++;
		}
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			i++;
		}	
		else
		{
			return (0);
		}
	}
	return (1);
}
/*#include <stdio.h>
int main()
{
	int a;
	char *str;
	str = "ola";
	a = ft_str_is_alpha(str);
	printf("a = %d", a);
}*/
