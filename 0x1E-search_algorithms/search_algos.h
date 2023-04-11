#ifndef _SEARCH_ALGO
#define _SEARCH_ALGO

#include <stdio.h>
#include <math.h>



int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void printarray(int *array, size_t size);
int jump_search(int *array, size_t size, int value);

#endif

