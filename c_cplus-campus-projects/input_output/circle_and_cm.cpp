#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
//Problem #1
	//variables
	float rad, area, pi;
	rad= 0, area= 0, pi = 3.14159265;
	//input
	cout<<"Enter the radius of the circle: ";
	cin>> rad;
	//equate
	area = rad * rad * pi;
	//output
	cout << setprecision(4);
	cout << "area= " << area;
//Problem #2
	//variables
	float cm, inch;
	cm = 2.54; inch = 0;
	//input
	cout << "\nInput the inch value: ";
	cin >> inch;
	//equate
	cm = cm * inch;
	//output
	cout << setprecision(4);
	cout << "cm= " << cm;
	
	return 0;
}