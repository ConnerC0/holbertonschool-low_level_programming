#ifndef _SEARCH_H_
#define _SEARCH_H_

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/** Prototype */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
int most_advanced_binary(int *array, int value, size_t low, size_t high);
void print_it(int *arr, int begin, int end);
#endif
