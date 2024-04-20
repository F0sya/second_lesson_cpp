#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double R1, R2, R3;
	cout << "R1:";
	cin >> R1;
	cout << "R2:";
	cin >> R2;
	cout << "R3:";
	cin >> R3;
	cout << "R1 = " << R1 << "; R2 = " << R2 <<"; R3 = " << R3 << endl;
	cout << "R0 = " << setprecision(7)<< (R1 * R2 * R3) / ((R2*R3) + (R1*R3) + (R1*R2)) << endl;
}