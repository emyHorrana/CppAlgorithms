/*🧩 Problem: Student Grouping

There are N students in a class, and the teacher wants to divide them into several groups.
However, the teacher stated that groups with two or fewer students are not allowed.
Therefore, your task is to divide the students in such a way that the number of valid groups
(each having three or more students) is maximized.

📤 Output:
- Print a single integer: the maximum number of groups that can be formed,
  where each group has at least three students.

*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int student_count;
    float result;

    cin >> student_count;

    if (student_count >= 3 && student_count < 6) {
        result = 1;
        cout << result;
    } else {
        result = student_count / 3;
        cout << result;
    }

    return 0;
}
