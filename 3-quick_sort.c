#include "sort.h"

/**
*swap - Swaps two integers
*@x: int
*@y: int
*Return: Swapped int, void.
*/

void swap(int *x, int *y)
{
int tmp;

tmp = *x;
*x = *y;
*y = tmp;
}


/**
* partition - Partition an array using pivot
* @array: Array
* @start: int
* @end: int
* @size: size of array (size_t)
* Return: index of pivote
*/

int partition(int *array, int start, int end, size_t size)
{
int pivot_value = array[end];
int i = start - 1, j;
for (j = start; j <= end; j++)
{
if (array[j] <= pivot_value)
{
i++;
if (i != j)
{
swap(&array[i], &array[j]);
print_array(array, size);
}
}
}
return (i);
}

/**
* quicksort_recursion - Sorts recursively an Array
* @array: Array to be sorted
* @start: The lowest value of the array
* @end: highest value of the array
* @size: Size of The Array
* Return: void
*/

void quicksort_recursion(int *array, int start, int end, size_t size)
{
int x;
if (start < end)
{
x = partition(array, start, end, size);
quicksort_recursion(array, start, x - 1, size);
quicksort_recursion(array, x + 1, end, size);
}
}

/**
* quick_sort - Quick Sort Algorithm using lomuto partition
* @array: Array to sort
* @size: Size of The Array
* Return: Sorted Array, void
*/
void quick_sort(int *array, size_t size)
{
quicksort_recursion(array, 0, size - 1, size);
}
