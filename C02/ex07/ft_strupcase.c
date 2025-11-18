/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viceda-s <viceda-s@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 10:44:46 by viceda-s          #+#    #+#             */
/*   Updated: 2025/05/04 10:54:37 by viceda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str1[] = "hello world";
	char	str2[] = "42Network";
	char	str3[] = "alrEAdy UPPER";
	char	str4[] = "";

	printf("Before: \"%s\" | After: \"%s\"\n", str1, ft_strupcase(str1));
	printf("Before: \"%s\" | After: \"%s\"\n", str2, ft_strupcase(str2));
	printf("Before: \"%s\" | After: \"%s\"\n", str3, ft_strupcase(str3));
	printf("Before: \"%s\" | After: \"%s\"\n", str4, ft_strupcase(str4));

	return (0);
}*/