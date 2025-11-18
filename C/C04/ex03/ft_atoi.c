/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viceda-s <viceda-s@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 08:41:46 by viceda-s          #+#    #+#             */
/*   Updated: 2025/05/06 11:29:26 by viceda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	parity;
	int	number;

	number = 0;
	parity = number;
	while (*str == '\t' || *str == '\n'
		|| *str == '\v' || *str == '\f'
		|| *str == '\r' || *str == ' ')
		++str;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			parity++;
		++str;
	}
	while (*str >= '0' && *str <= '9')
	{
		number *= 10;
		number += *str - '0';
		++str;
	}
	if (parity % 2 != 0)
		return (-number);
	return (number);
}

/*#include <stdio.h>

int	main(void)
{
	char	*s = "	---+--+1234ab567";

	printf("%d\n", ft_atoi(s));
}*/
