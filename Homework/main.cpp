#include "Homework_1.h"
#include <iostream>
#include <string>

int main() {

<<<<<<< HEAD
    Homework_1 homework_1;
=======
int main()
{

 // 1 Задача

	string email = "";
>>>>>>> 67e60160d2ea278a5971234767b656588b2e91d4

    cout << "Zadacha 1\n";

    homework_1.ZadachaEmail();
    cout << endl;
    cout << "Zadacha 2\n";
    cout << endl;

    homework_1.ZadachaURL();

<<<<<<< HEAD
    return 0;
=======
	cout << user << endl;
	cout << server << endl;
	cout << nationality;

	////////////////////////////////////////////

 // 2. Задача

	string URL = "";

	cin >> URL;

	size_t protocolEnd = URL.find("://");

	string protocol = URL.substr(0, protocolEnd);

	size_t hostStart = protocolEnd + 3;
	size_t pathStart = URL.find("/", hostStart);

	string host = (pathStart != string::npos) ? URL.substr(hostStart, pathStart - hostStart) : URL.substr(hostStart);

	string file, path;
	if (pathStart != string::npos) {
		size_t fileStart = URL.rfind("/");
		path = URL.substr(pathStart, fileStart - pathStart);
		file = URL.substr(fileStart + 1);
	}

	cout << "Protocol: " << protocol << endl;
	cout << "Host: " << host << endl;
	cout << "Path: " << path << endl;
	cout << "File: " << file << endl;
>>>>>>> 67e60160d2ea278a5971234767b656588b2e91d4
}