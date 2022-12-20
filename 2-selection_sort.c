#include "sort.h"

/**
* selection_sort- sorts an array of integers
* in ascending order using selection sort algorithm
* @array: an array of integers
* @size: size of the array of integers
* Return: Nothing
*/

void selection_sort(int *array, size_t size)
{
size_t i = 0, j = 0;
size_t k = 0;
int tmp = 0;

if (size < 2)
{
return;
}

while (i < size)
{
k = i;

for (j = i + 1; j < size; j++)
{
if (array[k] > array[j])
{
k = j;
}
}

if (k != i)
{
tmp = array[i];
array[i] = array[k];
array[k] = tmp;
print_array(array, size);
}

i++;
}
}
