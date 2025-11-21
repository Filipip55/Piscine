/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 13:26:04 by icoman            #+#    #+#             */
/*   Updated: 2025/10/23 11:58:30 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	capitalize_char(int new_word, char *c)
{
	if (*c >= 'a' && *c <= 'z')
	{
		if (new_word)
			*c -= 32;
	}
	else if (*c >= 'A' && *c <= 'Z')
	{
		if (!new_word)
			*c += 32;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 1;
	while (str[i])
	{
		capitalize_char(new_word, &str[i]);
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			new_word = 0;
		}
		else
		{
			new_word = 1;
		}
		i++;
	}
	return (str);
}

/*
int main()
{
	char str[20] = "the cAke iS a LiE";
	ft_strcapitalize(str);
	printf("%s", str);
}
*/