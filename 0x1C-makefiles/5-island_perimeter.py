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
    for y in range(len(grid)):
        for x in range(len(grid[0])):
            if grid[y][x] > 0:
                fence_x[x] += 1
    return (4 * max(fence_x))
