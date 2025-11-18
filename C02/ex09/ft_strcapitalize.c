/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viceda-s <viceda-s@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 11:18:01 by viceda-s          #+#    #+#             */
/*   Updated: 2025/05/15 10:17:16 by viceda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new;

	i = 0;
	new = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (new && str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			else if (!new && str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			new = 0;
		}
		else
			new = 1;
		i++;
	}
	return (str);
}

/* int	main(void)
{
	char	str1[] = "hi, how are you? 42words forty-two; fifty+and+one";

	printf("Original : %s\n", str1);
	printf("New : %s\n\n", ft_strcapitalize(str1));

	return (0);
} */