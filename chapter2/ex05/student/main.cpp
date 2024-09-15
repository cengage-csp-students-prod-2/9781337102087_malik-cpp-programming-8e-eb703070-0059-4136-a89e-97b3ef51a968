#include <iostream>

using namespace std;


int main() {

double radius;

const double PI = 3.14;

cout << "Enter the radius: ";

cin >> radius;

double area = PI * (radius * radius);

double circumference = 2 * (PI * radius);

cout << "Area = " << area << endl;

cout << "Circumference = " << circumference << endl;

return 0;

}