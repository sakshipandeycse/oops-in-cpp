// attendance percentage
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<double> attendance = {82.5, 76.0, 68.5, 91.0, 74.0, 80.0};
    int countAbove75 = 0;

    cout << "Attendance percentages:\n";
    for (auto studentAttendance : attendance) {
        cout << studentAttendance << "%";

        if (studentAttendance > 75.0) {
            countAbove75++;
        }
        cout<<endl;
    }
  

    cout << "Students with attendance more than 75%: " << countAbove75 << endl;

    return 0;
}