#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double L, pi = 3.14;
	cout << "Circle length:";
	cin >> L;
	double R = L / (2 * pi);
	cout << "Radius of circle:" << R << endl;
	double S = pi * (R*R);
	cout << "Area of circle:" << S << endl;
	return 0;
}