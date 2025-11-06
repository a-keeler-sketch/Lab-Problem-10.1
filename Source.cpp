/*
* File: P9-1
* Author: Anna Keeler
* Date: 10/30/2025
*
* Description: Lab 9.1
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
//global variables

//prototypes
int count_letters(string str);

int main(void) {
    while (true) {
       

        string basicString;
        cout << "Please input a string or Q to quit: ";
        getline(cin, basicString);

        if (basicString == "Q") {
            break;
        }
        else {
            int countMyLetters = count_letters(basicString);
            cout << "Number of Letters: " << countMyLetters << endl;
        }
    }
    return 0;

}

int count_letters(string str) {
    int isUpperCase = 0;
    int isLowerCase = 0;

    for (int i = 0; i <= str.length(); i++) { //loop
        if (str[i] >= 65 && str[i] <= 90) { //uppercase ascii values
            isUpperCase++;
        }
        if (str[i] >= 97 && str[i] <= 122) { //lowercase ascii values
            isLowerCase++;
        }
    }
    return isUpperCase+isLowerCase;
}
