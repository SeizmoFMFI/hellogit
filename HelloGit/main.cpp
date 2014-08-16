#include <iostream>
#include "global.h"
using namespace std;

int main() {
	cout << "hello git world" << endl << endl;

	cout << "to learn using GitHub, please do following:" << endl;
	cout << "1. edit source file and add your name into the list of contributors and sync your changes" << endl;
	cout << "you are welcome to edit any part of this project :-)" << endl;

	users();

	cout << endl;
	cout << "2. go to github online repository and write/edit a issue (click 'issue' on the right panel" << endl;
	cout << endl << "Program finished. Press anything to exit." << endl;
	cin.get();
	return 0;
}