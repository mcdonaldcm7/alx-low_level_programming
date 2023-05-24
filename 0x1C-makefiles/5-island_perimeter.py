#!/usr/bin/python3
"""
This module contains the definition for the island_perimeter function which
returns the perimeter of the island described in the grid
"""


def island_perimeter(grid):
    """
    Return perimeter for grid
    """
    if grid is None or not isinstance(
            grid, list) or not isinstance(grid[0], list):
        return (0)
    fence_x = list(0 for i in range(len(grid[0])))
    fence_y = list(0 for i in range(len(grid)))
    for i in range(len(grid)):
        fence_y[y] += sum(grid[y])
        for j in range(len(grid[0])):
            if grid[i][j] > 0:
                fence_x[j] += 1
    xtra = 0
    if len(grid) != len(grid[0]):
        return (4 * max(fence_x) + 2 * (max(fence_y) - 1))
    return (4 * max(fence))
