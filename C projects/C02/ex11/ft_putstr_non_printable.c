/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:35:52 by icoman            #+#    #+#             */
/*   Updated: 2025/10/23 18:13:57 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char			*cifrario_hex;
	unsigned char	c;
	int				i;
	int				cifra1;
	int				cifra2;

	cifrario_hex = "0123456789abcdef";
	i = 0;
	while (str[i])
	{
		if (str[i] <= 31 || str[i] == 127)
		{
			c = (unsigned char)str[i];
			cifra1 = c / 16;
			cifra2 = c % 16;
			ft_putchar('\\');
			ft_putchar(cifrario_hex[cifra1]);
			ft_putchar(cifrario_hex[cifra2]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}

/*
int main()
{
	ft_putstr_non_printable("\nciao\n");
}
*/