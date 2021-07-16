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

    for(int i = 0; i < size; i++) // Selection Sort
    {
        for(int j = i; j < size; j++)
        {
            if(arr[i] > arr[j])
            {
                arr[i] += arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] -= arr[j];
            }
        }
    }

    std::cout << "The sorted elements are : ";
    for(int i = 0; i < size; i++) // Sorted Array Output
    {
        std::cout << arr[i] << " ";
    }
}