#include <iostream>
#include <string>
using namespace std;
int main() {
string str = "Marval";


string greeting = str + ",studio!";
cout <<"Concatenation:"<<greeting << endl;

string part = greeting.substr(7, 7);


cout << "Substring: " << part << endl;


size_t pos = greeting.find("studio");
cout<<"Find:'Marval'found at position"<<pos<<endl;


string replaced = greeting;
replaced.replace(pos,9,"war");
cout << "Replace: " << replaced << endl;


string inserted = greeting;
inserted.insert(6, " powerful ");
cout << "Insert: " << inserted << endl;


string erased = greeting;
erased.erase(6, 7);


cout << "Erase: " << erased << endl;


string uppercase = greeting;
for (char &c : uppercase) c = toupper(c);
cout <<"To Uppercase:"<<uppercase << endl;


string lowercase = greeting;
for (char &c : lowercase) c = tolower(c);
cout<<"ToLowercase:"<<lowercase << endl;
return 0;
}