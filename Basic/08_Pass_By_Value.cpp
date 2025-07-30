// Problem: Increment a number using pass by value
// Input: x = 5
// Output:
// Inside function: 6
// Original value remains 5 (not changed outside)

class Solution {
public:
    void increment(int num) {
        num++;
        cout << "Inside function: " << num << endl;
    }
};
