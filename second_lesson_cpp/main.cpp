#include <iostream>

using namespace std;

int main() {
	double V, t, a;
	cout << "Speed of object(V):"; cin >> V;
	cout << "Time of travel(t)"; cin >> t;
	cout << "Acceleration(a):"; cin >> a;
	cout << endl << "V = " << V << "; t = " << t << "; a = " << a << endl;
	cout << "Distance traveled(S) = " << (V * t) + ((a * (t * t)) / 2) << endl;
	return 0;
}