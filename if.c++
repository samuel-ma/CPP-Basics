

#include <iostream>
#include <string>
using namespace std;

int main(){

  if (10 > 8) {
    cout << "10 is greater than 8" << endl;
  }
  else {
    cout << "10 is not greater than 8" << endl;
  }

  //using variables
  int x = 20;
  int y = 18;
  if (x > y) {
    cout << "x is greater than y" << endl;
  }
  else {
    cout << "x is not greater than y" << endl;
  }

  // else if statement
  string name;
  string name2;
  string name3;

  cin >> name;
  cin >> name2;
  cin >> name3;

  if (name == "John"){
    cout << "Hello " << name << endl;
  } else if (name2 == "John"){
    cout << "Hello " << name2 << endl;
  } else if (name3 == "John"){
    cout << "Hello " << name3 << endl;
  } else {
    cout << "Hello " << name << endl;
  }
}

