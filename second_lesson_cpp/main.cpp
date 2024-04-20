#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << "\t\tName       :";
	SetConsoleTextAttribute(hConsole,0x0E);
	cout << " \"The war and the peace\"" << endl;
	SetConsoleTextAttribute(hConsole, 0x0F);
	cout << "\n\t\tAvtor      :   L.N. Tolstoj"
		"\n\t\tIzdatelstvo:  Piter"
		"\n\t\tPages      : 500" << endl;
	return 0;
}