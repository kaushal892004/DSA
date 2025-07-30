// Problem: Increment a number using pass by reference
// Input: x = 5
// Output:
// Inside function: 6
// Original value also becomes 6

class Solution {
public:
    void increment(int &num) {
        num++;
        cout << "Inside function: " << num << endl;
    }
};
