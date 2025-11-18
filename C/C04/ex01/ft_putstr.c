/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viceda-s <viceda-s@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:38:58 by viceda-s          #+#    #+#             */
/*   Updated: 2025/05/05 19:52:10 by viceda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

/*#include <stdio.h>

int	main(void)
{
	ft_putstr("Peco ao tempo queeeee\n");
	ft_putstr("corra deeeevagaaaaar.\n");
	ft_putstr("");
	ft_putstr("0 t3mp0 n0 s3u lugar!\n");
	ft_putstr("@#$%^&*()\n");
	return (0);
}*/
