//include statement(s)
#include <iostream>
#include <string>
//using namespace statement
using namespace std;

int main() {
//variable declaration
string name;
double studyHours;
//executable statements
cout << "Name: ";
cin >> name;

cout << "Study Hours: ";
cin >> studyHours;

cout << "Hello, " << name << "!" << " On Saturday, you need to study " << studyHours << " for the exam.";
//return statement

return 0;
}