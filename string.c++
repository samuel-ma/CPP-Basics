

#include <iostream>
#include <string>
using namespace std;

int main(){

  string name = "Samuel Ma";
  string name2 = "Mabil Ma";
  string alphabet = "abcdefghijklmnopqrstuvwxyz";
  int age = 22;
  string name3;
  cin >> "What is your name" >> name3;

  cout << "Hello " << name3 << endl << "\n";
  cout << "The String is " << alphabet.length() << " characters long. \n";
  cout << name << " and " << name2 << " are brothers \n" << endl;
  cout << "My name is " << name << " and I am " << age << " years old \n" << endl;
  return 0;
}

