#include <iostream>
using namespace std;

int main() {
	int top_left_corner = 201;
	int horizontal_line = 205;
	int vertical_line = 186;
	int top_right_corner = 187;
	int space = 32;
	int left_connector = 204;
	int right_connector = 185;
	int bottom_left_corner = 200;
	int bottom_right_corner = 188;
	int top_connector = 203;
	int bottom_connector = 202;
	cout << char(top_left_corner)<< string(84,char(horizontal_line)) << char(top_right_corner) << endl 
		<<char(vertical_line) << string(35,char(space)) << "Vremena goda" << string(37,char(space)) << char(vertical_line) << endl
		<<char(left_connector) << string(20, char(horizontal_line)) << char(top_connector) << string(21, char(horizontal_line)) << char(top_connector) << string(20, char(horizontal_line)) << char(top_connector) << string(20, char(horizontal_line)) << char(right_connector) << endl
		<<char(vertical_line) << string(8,char(space)) << "Zima" << string(8, char(space)) << char(vertical_line) << string(8, char(space)) << "Vesna" << string(8, char(space)) << char(vertical_line) << string(8, char(space)) << "Leto" << string(8, char(space)) << char(vertical_line) << string(8, char(space)) << "Osen" << string(8, char(space)) << char(vertical_line) << endl
		<<char(bottom_left_corner) << string(20,char(horizontal_line)) << char(bottom_connector) << string(21, char(horizontal_line)) << char(bottom_connector) << string(20, char(horizontal_line)) << char(bottom_connector) << string(20, char(horizontal_line)) << char(bottom_right_corner) << endl;
	return 0;
}