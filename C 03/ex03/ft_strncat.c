/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:38:34 by ldiogo            #+#    #+#             */
/*   Updated: 2022/01/26 14:58:31 by ldiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	n = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[n] != '\0' && n < nb)
	{
		dest[i] = src[n];
		i++;
		n++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int		main(void)
{
	char dest[20] = "Hello";
	char src[] = ", world!";
	unsigned int nb = 3;

	printf("-----\ndest = %s\nsrc = %s\n", dest, src);
	ft_strncat(dest, src, nb);
	printf("result = %s\n-----\n", dest);

	return (0);
}*/
