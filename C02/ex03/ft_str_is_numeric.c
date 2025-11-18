/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viceda-s <viceda-s@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 10:13:30 by viceda-s          #+#    #+#             */
/*   Updated: 2025/05/04 10:17:45 by viceda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	*test1 = "1234";
	char	*test2 = "H3ll0W0rld";
	char	*test3 = "";

	printf("Test 1: %s -> %d\n", test1, ft_str_is_numeric(test1));
	printf("Test 2: %s -> %d\n", test2, ft_str_is_numeric(test2));
	printf("Test 3: \"%s\" -> %d\n", test3, ft_str_is_numeric(test3));
	return (0);
}*/