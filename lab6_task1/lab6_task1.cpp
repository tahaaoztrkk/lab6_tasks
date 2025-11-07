#include <iostream>
using namespace std;

void findMinMax(int arr[], int size, int& min, int& max) {
    min = arr[0];  
    max = arr[0];  

    for (int i = 1; i < size; i++) { 
        if (max < arr[i]) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
}

int main() {
    int arr[5] = { 12, 23, 25, 17, 47 };
    int minVal, maxVal;

    findMinMax(arr, 5, minVal, maxVal);

    cout << "Max and min values are: " << maxVal << " and " << minVal << endl;

    return 0;
}