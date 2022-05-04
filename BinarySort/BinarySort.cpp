#include <iostream>

int* Sort(int arr[], int arrSize) {
    // Creates a variable tracking if the items were switched in the current pass.
    bool swappedVals = true;
    while (swappedVals) {
        swappedVals = false;
        for (int i = 0; i < arrSize - 1; i++) {
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

int BinarySearch(int sortedArr[], int arrSize, int searchVal) {
    int leftBounds = 0;
    int rightBounds = arrSize - 1;
    while (leftBounds <= rightBounds) {
        int midVal = (leftBounds + rightBounds) / 2;
        if (sortedArr[midVal] == searchVal) {
            return midVal;
        }
        else if (sortedArr[midVal] < searchVal) {
            leftBounds = midVal + 1;
        }
        else {
            rightBounds = midVal - 1;
        }
    }

    return 0;
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

    std::cout << "THE INDEX OF 1 IS: " << BinarySearch(sortedArray, array_size, 1);
}