/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viceda-s <viceda-s@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:27:21 by viceda-s          #+#    #+#             */
/*   Updated: 2025/05/06 11:29:36 by viceda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

/*#include <stdio.h>

int	main(void)
{
	char	str1[] = "Hello, 42!";
	char	str2[] = "";
	char	str3[] = "This is a longer string to test.";

	printf("Length of '%s': %d\n", str1, ft_strlen(str1));
	printf("Length of '%s': %d\n", str2, ft_strlen(str2));
	printf("Length of '%s': %d\n", str3, ft_strlen(str3));

	return (0);
}*/
