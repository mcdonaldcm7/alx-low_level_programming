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
    fence = list(0 for i in range(len(grid[0])))
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] > 0:
                fence[j] += 1
    return (4 * max(fence))
