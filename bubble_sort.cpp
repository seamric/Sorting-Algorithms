                            #include <iostream>

                            int main()
                            {
                                int arr[10];
                                int size;
                                std::cout << "Enter the size of array : ";
                                std::cin >> size;
                                std::cout << "Enter the elements of the array : ";
                                for(int i = 0; i < size; i++) // Array Input from User
                                {
                                    std::cin >> arr[i];
                                }

                                for(int i = 0; i < size; i++) // Bubble Sort
                                {
                                    for(int j = 0; j < size - i; j++)
                                    {
                                        if(arr[j] > arr[j + 1])
                                        {
                                            arr[j] += arr[j + 1];
                                            arr[j + 1] = arr[j] - arr[j + 1];
                                            arr[j] = arr[j] - arr[j + 1];
                                        }
                                    }
                                }

                                std::cout << "The sorted elements are : ";
                                for(int i = 0; i < size; i++) // Sorted Array Output
                                {
                                    std::cout << arr[i] << " ";
                                }
                            }