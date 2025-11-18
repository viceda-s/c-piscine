/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viceda-s <viceda-s@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 15:39:29 by viceda-s          #+#    #+#             */
/*   Updated: 2025/05/04 17:57:16 by viceda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr_non_printable(char *str)
{
	char	*hex;
	char	c;

	hex = "0123456789abcdef";
	while (*str)
	{
		if (*str >= 32 && *str <= 126)
			write(1, str, 1);
		else
		{
			write(1, "\\", 1);
			c = (unsigned char)*str / 16;
			write(1, &hex[(int)c], 1);
			c = (unsigned char)*str % 16;
			write(1, &hex[(int)c], 1);
		}
		str++;
	}
}

/*int	main(void)
{
	char	*str = "can\nI go\thome?";
	ft_putstr_non_printable(str);

	return (0);
}*/