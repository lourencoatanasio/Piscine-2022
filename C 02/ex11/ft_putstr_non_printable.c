/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldiogo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 19:57:03 by ldiogo            #+#    #+#             */
/*   Updated: 2022/01/24 20:10:02 by ldiogo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 && str[i] >= 0 && str[i] != 127)
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[str[i] / 16]);
			ft_putchar("0123456789abcdef"[str[i] % 16]);
			i++;
		}
		else
		{
			ft_putchar(str[i]);
			i++;
		}
	}
}

/*#include <stdio.h>

int main()
{
	char str[] = "Coucou\ntu vas bien ?";

	ft_putstr_non_printable(str);
	return(0);
}*/
