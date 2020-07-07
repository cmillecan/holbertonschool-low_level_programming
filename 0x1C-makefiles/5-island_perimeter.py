#!/usr/bin/python3
"""
Island Perimeter
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island based on a grid:
    """

    count = 0
    edge = 0
    for row in range(len(grid)):
        for j in range(len(grid[row])):
            if grid[row][j] == 1:
                count += 1
                if row > 0 or grid[row - 1][j] == 1:
                    edge += 1
                if j > 0 or grid[row][j - 1] == 1:
                    edge += 1

    return count * 4 - edge * 2
