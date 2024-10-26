#pragma once
#include <iostream>
#include <string>

using namespace std;

class Homework_2 {
public:
	void Zadacha1() {

        string inputText;
        cout << "Enter text: ";
        getline(cin, inputText);

        string result;
        string mask = " ,.;!?";
        size_t start = 0, end = 0;
        int wordCount = 1;

        while ((start = inputText.find_first_not_of(mask, end)) != string::npos) {
            end = inputText.find_first_of(mask, start);
            string word = inputText.substr(start, end - start);

            if (word.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") == string::npos) {
                result += "word" + to_string(wordCount++);
            }
            else {
                result += word;
            }

            if (end != string::npos && mask.find(inputText[end]) != string::npos) {
                result += inputText[end];
                if (inputText[end] == ',') {
                    result += " ";
                }
            }
        }

        cout << result << endl;
	}

    void Zadacha2() {

        string inputText;
        cout << "Enter text: ";
        getline(cin, inputText);

        size_t pos = -1;

        while ((pos = inputText.find_first_of("0123456789", pos + 1)) != string::npos) {
            size_t end = inputText.find_first_not_of("0123456789", pos);
            inputText.replace(pos, end - pos, "*");
        }

        cout << inputText << endl;
    }
};