#include <iostream>
#include <Windows.h>
using namespace std;


void sound() {
	for (int i = 0; i < 3; i++) {
		cout << "\a";
		Sleep(500);
	}
}
int main() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 0x0E);
	cout << "U lukomor'a dub zelenij,"<<endl;
	sound();
	cout << "Zlataya zep na dupe tom," << endl;
	sound();
	cout << "I dnem i nochju kot uchenij" << endl;
	sound();
	cout << "vse hodit po cepi krugom" << endl;
	sound();
	SetConsoleTextAttribute(hConsole, 0x0F);
	return 0;
}