int* reverse_array_extra_array(int arr[], int size)
{
  // Declaring a new array
  int* reversed_arr = new int[size];

  // Populating the new array with elements of the original array in reverse order
  for (int i = 0; i < size; i++)
    reversed_arr[i] = arr[size - i - 1];

  return reversed_arr;
}
