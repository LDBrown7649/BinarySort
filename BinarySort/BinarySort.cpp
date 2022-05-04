#include <iostream>

int* Sort(int arr[], int numItems) {
    bool swappedVals = true;
    while (swappedVals) {
        swappedVals = false;
        for (int i = 0; i < numItems - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                swappedVals = true;
                int temp = arr[i + 1];
                arr[i + 1] =  arr[i];
                arr[i] = temp;
            }
        }
        for (int i = 0; i < numItems; i++) {
            std::cout << arr[i] << ", ";
        }
        std::cout << std::endl;
    }
    return arr;
}

int main()
{
    //Stores the number of items in the array in a const.
    const int array_size = 25;
    int arr[array_size] = { 14,65,63,1,54,89,84,9,98,57,71,18,21,84,69,28,11,83,13,42,64,58,78,82,13};
    int* sortedArray = Sort(arr, array_size);
    
}