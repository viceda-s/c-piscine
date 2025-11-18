/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viceda-s <viceda-s@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 16:25:40 by viceda-s          #+#    #+#             */
/*   Updated: 2025/05/09 16:39:45 by viceda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	i = 1;
	while (i <= nb / i && i <= 46360)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

/* #include <stdio.h>

int	main(void)
{
	printf("Sq root of 144 is: %d\n", ft_sqrt(144));
	printf("Sq root of 82 is: %d\n", ft_sqrt(82));

} */