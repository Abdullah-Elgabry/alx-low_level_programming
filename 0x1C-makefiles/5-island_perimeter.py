#!/usr/bin/python3
"""this module for Creating a function that returns the perimeter of the island described in grid"""


def island_perimeter(grid):
    """
    this will returns the perimeter of the island
    """
    sum = 0
    fin = []
    now = []
    for index, lst in enumerate(grid):
        for iso_num, cell in enumerate(lst):
            if cell == 1:
                now.append(iso_num)
                if iso_num == 0 or lst[iso_num - 1] == 0:
                    sum += 1
                if iso_num == len(lst) - 1 or lst[iso_num + 1] == 0:
                    sum += 1
                if iso_num not in fin:
                    sum += 1
                if index + 1 < len(grid):
                    if grid[index + 1][iso_num] != 1:
                        sum += 1
                else:
                    sum += 1
        fin = now.copy()
        now = []

    return sum
