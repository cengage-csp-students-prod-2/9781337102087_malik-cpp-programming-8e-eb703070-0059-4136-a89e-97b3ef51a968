#include <iostream>
using namespace std;


int main() {


double radius;

double area;

const double PI = 3.14;

double circumference;

area = PI * radius * radius;

circumference = 2 * PI * radius;

cout << "Enter the radius: ";

cin >> radius;

cout << endl;

cout << "Area = " << area << endl;

cout << "Circumference = " << circumference << endl;

return 0;

}