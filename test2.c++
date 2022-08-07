

#include <iostream>
#include <string>
using namespace std;

int main(){

  // Declaring Strings without using  get line
  string name;
  cout << "What is your name?" << endl;
  cin >> name;
  cout << "Hello " << name << endl;


  // Declaring Strings using get line
  string fullName;
  cout << "What is your full name? " << endl;
  getline(cin, fullName);
  cout << "Your name is: " << fullName << endl;
  return 0;
}