// Problem: Print numbers from 1 to N using a for loop
// Input: N = 5
// Output: 1 2 3 4 5

class Solution {
public:
    void printNumbers(int N) {
        for (int i = 1; i <= N; i++) {
            cout << i << " ";
        }
        cout << endl;
    }
};
