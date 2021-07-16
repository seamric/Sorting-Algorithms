                                #include <iostream>

                                int main()
                                {
                                    int arr[10];
                                    int size, temp = 0;
                                    std::cout << "Enter the size of array : ";
                                    std::cin >> size;
                                    std::cout << "Enter the elements of the array : ";
                                    for(int i = 0; i < size; i++) // Array Input from User
                                    {
                                        std::cin >> arr[i];
                                    }

                                    for(int i = 0; i < size; i++) // selection sort
                                    {
                                        temp = arr[i];
                                        int j = i - 1;
                                        while((j >= 0) && (temp < arr[j]))
                                        {
                                            arr[j + 1] = arr[j];
                                            j--;
                                        }
                                        arr[j + 1] = temp;
                                    }

                                    std::cout << "The sorted elements are : ";
                                    for(int i = 0; i < size; i++) // Sorted Array Output
                                    {
                                        std::cout << arr[i] << " ";
                                    }
                                }