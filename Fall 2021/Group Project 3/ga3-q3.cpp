/*
--------------------------------------
Author: Chase Condron, Ivory Scherphorn, Karsyn Hutchinson
Program: ga3, q1
Date created: 12/4/21
--------------------------------------
*/
#include<iostream>
#include<string>

using namespace std;

//strReplace function to replace a word based on parameters in the call...
void strReplace(string & ogString, string replacedWord, string newWord){
    int found = 0;
    //while loop to find all instances of this word
    while(true){
        //if word is not found, return the function
        found = ogString.find(replacedWord, found);
        if (found == string::npos){
            return;
        }
        //if word is found
        else{
            //checking the character before the found words
            if (found != 0 && (ogString[found-1] >= 'a' && ogString[found-1]<= 'z')){
                found = found + replacedWord.size();
                continue;
            }
            //check the character after the found words
            if (ogString[found + replacedWord.size()] >= 'a' && ogString[found+ replacedWord.size()] <= 'z') {
                found = found + replacedWord.size();
                continue;
        }
        //replaces the word with new word
        ogString = ogString.substr(0, found) + newWord + ogString.substr(found + replacedWord.size());
        found = found + newWord.size();
        }
    }
}


int main ()
{
    //declare variables
    string str;
    //user enters their message
    cout << "Enter a message: ";
    getline(cin, str);

    //shows original message
    cout << "The original string was: "<< endl;
    cout << str << endl;
    //function calls to replace all instances of the words with new ones
    strReplace(str, "he", "they");
    strReplace(str, "she", "they");
    strReplace(str, "him", "them");
    strReplace(str, "his", "their");
    strReplace(str, "her", "them");
    //display results
    cout << "The new string is: "<< endl;
    cout << str << endl;
    return 0;
}
