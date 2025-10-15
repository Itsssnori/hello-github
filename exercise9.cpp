#include <iostream>
using namespace std;

int main (){
    int sum = 0, highest, lowest, num, grade;
    string remark;
    float average;

    cout << "Enter number of student: ";
    cin >> num;
    cout << endl;

    for (int i = 1; i <= num; i++){
        cout << "Enter grade of student " << i << ": ";
        cin >> grade;

        sum += grade;

        if (i == 1){
           highest = grade;
           lowest = grade;
        }
        else {
            if (grade > highest){
                highest = grade;
            }
            if (grade < lowest){
                lowest = grade;
            }
        }
    }
        average = (float) sum/num;
    
        if (average >= 90){
            remark = "Excellent";
        }
        else if (average >= 75){
            remark = "Good";
        }
        else {
            remark = "Needs improvement";
        }

        cout <<"\nAverage: " << average;
        cout << "\nHighest: " << highest;
        cout << "\nLowest: "<< lowest;
        cout <<"\n\nRemarks: "<< remark;
    return 0;
}