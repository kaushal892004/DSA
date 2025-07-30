// Problem: Print numbers from 1 to N using a while loop
// Input: N = 5
// Output: 1 2 3 4 5

class Solution {
public:
    void printNumbers(int N) {
        int i = 1;
        while (i <= N) {
            cout << i << " ";
            i++;
        }
        cout << endl;
    }
};
