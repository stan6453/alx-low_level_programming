#!/usr/bin/python3
"""Module Perimeter"""


def island_perimeter(grid):
    """
    returns the perimeter of the island described in grid
    """
    y1 = 0
    y2 = 0
    x1 = 100
    x2 = 0
    for ycount, y in enumerate(grid):
        if y1 == 0 and 1 in y:
            y1 = ycount
        if 1 in y:
            y2 = ycount

        for xindex, x in enumerate(y):
            if x == 1:
                if x2 < xindex:
                    x2 = xindex
                if x1 > xindex:
                    x1 = xindex

    ylength = (y2 - y1) + 1
    xlength = (x2 - x1) + 1

    return (ylength * 2) + (xlength * 2)
