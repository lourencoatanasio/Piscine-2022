/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 15:10:39 by ldiogo            #+#    #+#             */
/*   Updated: 2022/01/23 16:31:15 by ldiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] -= 32;
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str[i - 1] < 48 || (str[i - 1] > 57 && str[i - 1] < 65))
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		if ((str[i - 1] > 90 && str[i - 1] < 97) || str[i - 1] > 122)
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		i++;
	}
	return (str);
}

/*#include <stdio.h>
int main()
{
	char str[] = "HAAHAHAHHaahahahah, aooookKAK,aoodoOOO";

	ft_strcapitalize(str);
	printf("%s", str);
	return(0);
}*/
