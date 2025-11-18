/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viceda-s <viceda-s@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 11:11:25 by viceda-s          #+#    #+#             */
/*   Updated: 2025/05/15 11:22:19 by viceda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_comb(char *comb, int n, int last)
{
	write(1, comb, n);
	if (!last)
		write(1, ", ", 2);
}

void	generate_comb(char *comb, int n, int index, int start)
{
	int	i;

	i = start;
	while (i <= 9)
	{
		comb[index] = i + '0';
		if (index == n - 1)
			print_comb(comb, n, (comb[0] == (10 - n + '0')));
		else
			generate_comb(comb, n, index + 1, i + 1);
		i++;
	}
}

void	ft_print_combn(int n)
{
	char	comb[10];

	if (n < 1 || n > 9)
		return ;
	generate_comb(comb, n, 0, 0);
}

/* int main(void)
{
	ft_print_combn(2);
	write(1, "\n", 1);
	return 0;
} */