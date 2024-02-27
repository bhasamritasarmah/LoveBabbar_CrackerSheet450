public static int[] reverseArrayExtraArray (int[] arr)
{
  // Storing the size of the original array to be used later at multiple places
  int size = arr.length;

  // Defining a new array
  int[] reversedArr = new int[size];

  // Populating the new array with the elements of the original array in the reversed order
  for (int i = 0; i < size; i++)
    reversedArr[i] = arr[size - i - 1];
  
  return reversedArr;
}
