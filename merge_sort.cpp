#include <iostream>

void mergeSort(int* arr, int size);
void merge(int* left, int* right, int leftSize, int rightSize);

int main()
{
  int arr[10];
  int* ret_arr;
  int size;
  std::cout << "Enter the size of the array : ";
  std::cin >> size;
  std::cout << "Enter the elements of the array : ";
  for (int i = 0; i < size; i++)
  {
    std::cin >> arr[i];
  }

  ret_arr = arr;

  mergeSort(ret_arr, size);

  for (int i = 0; i < size; i++)
  {
    std::cout << ret_arr[i] << " ";
  }
}

void mergeSort(int* arr, int size)
{
  int mid = ((size - 1) / 2) + 1;
  int left[5];
  int right[5];
  left[0] = arr[0];
  right[0] = arr[0];
  if (size > 1)
  {
    for (int i = 0; i < mid; i++)
    {
      left[i] = arr[i];
      right[i] = arr[mid + i];
    }

    mergeSort(left, mid);
    mergeSort(right, mid - (size % 2));
  }

  merge(left, right, mid, mid - size % 2);

  for (int i = 0; i < mid; i++)
  {
    arr[i] = left[i];
    arr[mid + i] = right[i];
  }
}

void merge(int* left, int* right, int leftSize, int rightSize)
{
  for (int i = 0; i < leftSize; i++)
  {
    for (int j = 0; j < rightSize; j++)
    {
      if (left[i] > right[j])
      {
        left[i] += right[j];
        right[j] = left[i] - right[j];
        left[i] -= right[j];
      }
      if ((right[j] > right[j + 1]) && ((j + 1) < rightSize))
      {
        right[j] += right[j + 1];
        right[j + 1] = right[j] - right[j + 1];
        right[j] -= right[j + 1];
      }
    }
  }
}