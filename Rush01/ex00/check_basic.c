/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_basic.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viceda-s <viceda-s@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 16:48:23 by gluz-ste          #+#    #+#             */
/*   Updated: 2025/05/11 23:34:21 by viceda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define GRID_SIZE 4

int	check_col_up(int grid[GRID_SIZE][GRID_SIZE], int col, int clue);
int	check_col_down(int grid[GRID_SIZE][GRID_SIZE], int col, int clue);
int	check_row_left(int grid[GRID_SIZE][GRID_SIZE], int row, int clue);
int	check_row_right(int grid[GRID_SIZE][GRID_SIZE], int row, int clue);

int	check_basic(int grid[GRID_SIZE][GRID_SIZE], int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < GRID_SIZE)
	{
		if (grid[row][i] == num || grid[i][col] == num)
			return (0);
		i++;
	}
	return (1);
}

int	check_row_filled(int grid[GRID_SIZE][GRID_SIZE], int row,
		int *clues)
{
	int	i;
	int	filled;

	filled = 1;
	i = 0;
	while (i < GRID_SIZE)
	{
		if (grid[row][i] == 0)
			filled = 0;
		i++;
	}
	if (filled)
		if (!check_row_left(grid, row, clues[8 + row])
			|| !check_row_right(grid, row, clues[12 + row]))
			return (0);
	return (1);
}

int	check_col_filled(int grid[GRID_SIZE][GRID_SIZE], int col,
		int *clues)
{
	int	i;
	int	filled;

	filled = 1;
	i = 0;
	while (i < GRID_SIZE)
	{
		if (grid[i][col] == 0)
			filled = 0;
		i++;
	}
	if (filled)
		if (!check_col_up(grid, col, clues[col])
			|| !check_col_down(grid, col, clues[4 + col]))
			return (0);
	return (1);
}

int	is_valid(int grid[GRID_SIZE][GRID_SIZE], int *pos, int *clues)
{
	if (!check_basic(grid, pos[0], pos[1], pos[2]))
		return (0);
	grid[pos[0]][pos[1]] = pos[2];
	if (!check_row_filled(grid, pos[0], clues)
		|| !check_col_filled(grid, pos[1], clues))
	{
		grid[pos[0]][pos[1]] = 0;
		return (0);
	}
	grid[pos[0]][pos[1]] = 0;
	return (1);
}
