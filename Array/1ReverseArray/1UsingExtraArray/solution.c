int* reverse_array_extra_array(int arr[], int size)
{
  // Defining a new array
  int* reversed_arr = malloc(size * sizeof(int));
  // Handling memory allocation failure for the new array
  if (reversed_arr == NULL)
    return NULL;

  // Populating the new array with the elements of the original array in the reverse order
  for (int i = 0; i < size; i++)
    reversed_arr[i] = arr[size - i - 1];
  
  return reversed_arr;
}
