#ifndef STRING_OPERATIONS_H
#define STRING_OPERATIONS_H

#include <iostream>
#include <string>

using namespace std;	

void removeCharacterAt(string& str, int position);
void removeAllOccurrences(string& str, char target);
void insertCharacterAt(string& str, int position, char ch);
std::string replaceDotsWithExclamation(const std::string& str);
int countOccurrences(const string& str, char target);
void countCharacterTypes(const string& str, int& letters, int& digits, int& others);

#endif 
