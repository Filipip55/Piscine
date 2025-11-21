/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 18:23:55 by icoman            #+#    #+#             */
/*   Updated: 2025/10/23 12:34:20 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_hex_addr(unsigned long addr)
{
	const char	*cifrario_hex;
	char		str[16];
	int			i;

	cifrario_hex = "0123456789abcdef";
	i = 15;
	while (i >= 0)
	{
		str[i] = cifrario_hex[addr % 16];
		addr /= 16;
		i--;
	}
	write(1, str, 16);
}

void	print_hex_content(unsigned char *p, unsigned int size)
{
	const char		*cifrario_hex;
	unsigned int	i;

	cifrario_hex = "0123456789abcdef";
	i = 0;
	while (i < 16)
	{
		if (i < size)
		{
			ft_putchar(cifrario_hex[p[i] / 16]);
			ft_putchar(cifrario_hex[p[i] % 16]);
		}
		else
			write(1, "  ", 2);
		if (i % 2)
			ft_putchar(' ');
		i++;
	}
}

void	print_ascii_content(unsigned char *p, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		if (p[i] >= 32 && p[i] <= 126)
			ft_putchar(p[i]);
		else
			ft_putchar('.');
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned char	*p;

	if (size == 0)
		return (addr);
	p = (unsigned char *)addr;
	i = 0;
	while (i < size)
	{
		print_hex_addr((unsigned long)(p + i));
		write(1, ": ", 2);
		if (size - i >= 16)
			print_hex_content(p + i, 16);
		else
			print_hex_content(p + i, size - i);
		if (size - i >= 16)
			print_ascii_content(p + i, 16);
		else
			print_ascii_content(p + i, size - i);
		ft_putchar('\n');
		i += 16;
	}
	return (addr);
}
/*
int main(void)
{
	char str[] = "Ma buongiorno \nprint_memory\n\nlol.lol\n";

	ft_print_memory(str, sizeof(str));
	return (0);
}
*/
