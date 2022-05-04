#include <iostream>

int* Sort(int arr[], int numItems) {
    // Creates a variable tracking if the items were switched in the current pass.
    bool swappedVals = true;
    while (swappedVals) {
        swappedVals = false;
        for (int i = 0; i < numItems - 1; i++) {
            // Swaps the values if the left value was larger than the right value.
            if (arr[i] > arr[i + 1]) {
                swappedVals = true;
                int temp = arr[i + 1];
                arr[i + 1] =  arr[i];
                arr[i] = temp;
            }
        }
    }
    // Returns the now sorted list.
    return arr;
}

int main()
{
    //Stores the number of items in the array in a const.
    const int array_size = 25;
    int arr[array_size] = { 14,65,63,1,54,89,84,9,98,57,71,18,21,84,69,28,11,83,13,42,64,58,78,82,13};

    // Sorts the array in ascending order.
    int* sortedArray = Sort(arr, array_size);

    // Displays the array to the console for the user to see.
    for (int i = 0; i < array_size; i++) {
        std::cout << sortedArray[i] << ", ";
    }
    std::cout << std::endl;
}