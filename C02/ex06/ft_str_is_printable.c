/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viceda-s <viceda-s@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 10:28:52 by viceda-s          #+#    #+#             */
/*   Updated: 2025/05/04 10:40:10 by viceda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	*test1 = "Hello, world!";
	char	*test2 = "Hello\tWorld";
	char	*test3 = "";
	char	*test4 = "0123456789";
	char	*test5 = "Line\nBreak";

	printf("Test 1: \"%s\" -> %d\n", test1, ft_str_is_printable(test1));
	printf("Test 2: \"%s\" -> %d\n", test2, ft_str_is_printable(test2));
	printf("Test 3: \"%s\" -> %d\n", test3, ft_str_is_printable(test3));
	printf("Test 4: \"%s\" -> %d\n", test4, ft_str_is_printable(test4));
	printf("Test 5: \"%s\" -> %d\n", test5, ft_str_is_printable(test5));
	return (0);
}*/