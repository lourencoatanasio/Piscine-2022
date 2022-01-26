/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 18:57:49 by ldiogo            #+#    #+#             */
/*   Updated: 2022/01/26 17:00:45 by ldiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (i < n && s1[i] != s2[i])
			return (1);
		else
			i++;
	}
	return (0);
}

/*#include <stdio.h>
int	main()
{
	char *s1;
	char *s2;
	unsigned int n;

	n = 2;
	s1 = "OL3";
	s2 = "OL2";


	ft_strncmp(s1, s2, n);
	printf("a = %d", ft_strncmp(s1, s2, n));
	return (0);
}*/
