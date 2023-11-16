#include "header.h"
#include <iostream>

using namespace std;

void removeCharacterAt(std::string& str, int position) {
    if (position >= 0 && position < str.length()) {
        str.erase(position, 1);
    }
}

void removeAllOccurrences(string& str, char target) {
    string::iterator it = remove(str.begin(), str.end(), target);
    str.erase(it, str.end());
}

void insertCharacterAt(string& str, int position, char ch) {
    if (position >= 0 && position <= str.length()) {
        str.insert(position, 1, ch);
    }
}

string replaceDotsWithExclamation(const string& str) {
    string result = str;
    for (char& ch : result) {
        if (ch == '.') {
            ch = '!';
        }
    }
    return result;
}

int countOccurrences(const string& str, char target) {
    int count = 0;
    for (char ch : str) {
        if (ch == target) {
            count++;
        }
    }
    return count;
}

void countCharacterTypes(const string& str, int& letters, int& digits, int& others) {
    letters = digits = others = 0;

    for (char ch : str) {
        if (isalpha(ch)) {
            letters++;
        }
        else if (isdigit(ch)) {
            digits++;
        }
        else {
            others++;
        }
    }
}
