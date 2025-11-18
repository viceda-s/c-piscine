/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viceda-s <viceda-s@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 10:23:00 by viceda-s          #+#    #+#             */
/*   Updated: 2025/05/04 10:42:23 by viceda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	*test1 = "HELLOWORLD";
	char	*test2 = "HelloWorld";
	char	*test3 = "H3LLOW0RLD";
	char	*test4 = "";

	printf("Test 1: %s -> %d\n", test1, ft_str_is_uppercase(test1));
	printf("Test 2: %s -> %d\n", test2, ft_str_is_uppercase(test2));
	printf("Test 3: %s -> %d\n", test3, ft_str_is_uppercase(test3));
	printf("Test 4: \"%s\" -> %d\n", test4, ft_str_is_uppercase(test4));
	return (0);
}*/