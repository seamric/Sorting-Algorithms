              #include <iostream>

              void quickSort(int* arr, int start, int finish);
              int Sort(int* arr, int pivot, int start, int finish);

              int main()
              {
                  int size, arr[10], * ptr;
                  std::cout << "Enter the size of the array : ";
                  std::cin >> size;
                  std::cin.get();
                  for (int i = 0; i < size; i++)
                  {
                      std::cin >> arr[i];
                  }

                  ptr = arr;
                  quickSort(ptr, 0, size);

                  for (int i = 0; i < size; i++)
                  {
                      std::cout << ptr[i] << " ";
                  }
              }

              void quickSort(int* arr, int start, int finish)
              {

                  int pivot = start;
                  int partition = Sort(arr, pivot, start, finish - 1);
                  
                  if ((finish - start) > 1)
                  {
                      quickSort(arr, start, partition);
                      quickSort(arr, pivot + 1, finish);
                  }
              }
              int Sort(int* arr, int pivot, int start, int finish)
              {
                  int i = start;
                  int j = finish;
                  while (j >= i)
                  {
                      if ((arr[i] >= arr[pivot]) && (arr[j] < arr[pivot]))
                      {
                          arr[i] += arr[j];
                          arr[j] = arr[i] - arr[j];
                          arr[i] -= arr[j];
                      }
                      if (arr[i] <= arr[pivot])
                      {
                          i++;
                      }
                      if (arr[j] > arr[pivot])
                      {
                          j--;
                      }
                  }
                  if ((j > 0) && (i <= finish) && (j != pivot))
                  {
                  arr[j] += arr[pivot];
                  arr[pivot] = arr[j] - arr[pivot];
                  arr[j] -= arr[pivot];
                  }
                  return j;
              }