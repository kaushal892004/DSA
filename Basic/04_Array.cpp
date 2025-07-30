// Problem: Print all elements of an array of size N
// Input: arr = {10, 20, 30, 40, 50}, N = 5
// Output:
// arr[0] = 10
// arr[1] = 20
// arr[2] = 30
// arr[3] = 40
// arr[4] = 50

class Solution {
public:
    void printArray(int arr[], int size) {
        for (int i = 0; i < size; i++) {
            cout << "arr[" << i << "] = " << arr[i] << endl;
        }
    }
};
