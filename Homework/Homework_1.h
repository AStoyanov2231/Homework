#pragma once
#include <iostream>
#include <string>

using namespace std;

class Homework_1 {
public:
    void ZadachaEmail() {

        string email;
        cout << "Enter email: ";
        cin >> email;
        size_t atPosition = email.find('@');
        string user = email.substr(0, atPosition);
        string server = email.substr(atPosition + 1);

        string nationality = (server.find(".bg") == server.length() - 3) ? "bulgarski e" : "ne e bulgarski";

        cout << "User: " << user << endl;
        cout << "Server: " << server << endl;
        cout << "Nationality: " << nationality << endl;
    }

    void ZadachaURL() {

        string URL;
        cout << "Enter URL: ";
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
    }
};