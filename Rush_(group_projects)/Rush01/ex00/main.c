/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gluz-ste <gluz-ste@student.42luxembou      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 10:33:22 by gluz-ste          #+#    #+#             */
/*   Updated: 2025/05/10 11:27:49 by gluz-ste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define GRID_SIZE 4

void	ft_putstr(char *str);
int		ft_parser(char *str);
int		parse_clues(char *str, int *clues);
int		solve(int grid[GRID_SIZE][GRID_SIZE], int *clues);
void	print_grid(int grid[GRID_SIZE][GRID_SIZE]);
void	init_grid(int grid[GRID_SIZE][GRID_SIZE]);

void	init_grid(int grid[GRID_SIZE][GRID_SIZE])
{
	int	i;
	int	j;

	i = 0;
	while (i < GRID_SIZE)
	{
		j = 0;
		while (j < GRID_SIZE)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	clues[16];
	int	grid[GRID_SIZE][GRID_SIZE];

	if (argc != 2 || ft_parser(argv[1]) != 0)
	{
		ft_putstr("Error\n");
		return (1);
	}
	if (parse_clues(argv[1], clues) != 0)
	{
		ft_putstr("Error\n");
		return (1);
	}
	init_grid(grid);
	if (!solve(grid, clues))
	{
		ft_putstr("Error\n");
		return (1);
	}
	print_grid(grid);
	return (0);
}
