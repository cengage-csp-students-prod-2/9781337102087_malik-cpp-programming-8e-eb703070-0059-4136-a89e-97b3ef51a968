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
cout << "Enter first name: ";
cin >> name;

cout << "Enter study hours: ";
cin >> studyHours;

cout << "Hello, " << name << "!" << " On Saturday, you need to study " << studyHours << " for the exam." << endl;

//return statement

return 0;
}