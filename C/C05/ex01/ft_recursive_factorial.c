/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viceda-s <viceda-s@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 13:58:29 by viceda-s          #+#    #+#             */
/*   Updated: 2025/05/09 16:49:06 by viceda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	else
		return (nb * (ft_recursive_factorial(nb - 1)));
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_recursive_factorial(5));
}*/