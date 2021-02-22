/*
 * Palindrome
 * Author: Pujan Patel
 * To check wether a user input is a Palindrome after removing punctuations
 */
#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main() {
    //initialize variables
    char userInput[80];//user's input
    char modifiedInput[80];//input w/ removed punctuation
    char reversedInput[80];// input reversed
    int arrayLocation = 0;//index
    
    cin.getline(userInput, 80);//take input

    for(int i = 0; i < strlen(userInput); i++) {//if alphanumeric, put into modifiedArray
        if(isalnum(userInput[i])) {
            modifiedInput[arrayLocation] = tolower(userInput[i]);
            arrayLocation++;
        }
    }
    modifiedInput[arrayLocation] = '\0';
    arrayLocation = 0;

    for(int i = strlen(modifiedInput)-1; i >= 0; i--) {//enter elements in reverse order to reversedArray
        reversedInput[i] = modifiedInput[arrayLocation];
        arrayLocation++;
    }
    
    if(strncmp(modifiedInput, reversedInput, strlen(modifiedInput)) == 0) {//compare both arrays to extent of alphanumeric chars 
        cout << "Palindrome" << endl;
    }
    else {
        cout << "Not a palindrome" << endl;
    }
    
    return 0;
}
