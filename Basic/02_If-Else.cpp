//Problem : Given marks of a student, print on the screen:

// Grade A if marks >= 90
// Grade B if marks >= 70
// Grade C if marks >= 50
// Grade D if marks >= 35
// Fail, otherwise.

// Examples:
// Input: marks = 95

// Output: Grade A

// Explanation: marks are greater than or equal to 90.

// Input: marks = 14

// Output: Fail

// Explanation: marks are less than 35.

class Solution {
public:
    void studentGrade(int marks) {
        if (marks >= 90){
            cout << "Grade A";
        }
        else if (marks >=70 && marks < 90 ) {
            cout << "Grade B";
        }
        else if (marks >=50 && marks < 70 ) {
            cout << "Grade C";

        }
        else if (marks >= 35 && marks < 50 ) {
            cout << "Grade D";
        }
        else{
            cout << "Fail" ;
        }
    }
};
