/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 18:29:15 by ldiogo            #+#    #+#             */
/*   Updated: 2022/01/26 14:59:34 by ldiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	res;

	a = 0;
	b = 0;
	res = 0;
	while (dest[a])
		a++;
	while (src[res])
		res++;
	if (size <= a)
		res += size;
	else
		res += a;
	while (src[b] && (a + 1) < size)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (res);
}
/*
#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void) {
  printf("Exercice 05 : ft_strlcat \n\n");
  char str1[100] = "ABatua majajajaajajaeC";
  char str2[100] = "DEaj";
  unsigned int size;
  size = 10;

  printf("Result: %i \n\n", ft_strlcat(str1, str2, size));
}*/
