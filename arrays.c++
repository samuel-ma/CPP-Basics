

#include <iostream>
#include <string>
using namespace std;

int main(){

  string cars[3] = {"Volvo", "BMW", "Ford"};
  string names[4] = { "John", "Paul", "George", "Ringo"};
  int myNum[3] = {1, 2, 3};
  cars[0] = "Bugatti";

  cout << "The first car is: " << cars[0] << endl;
  cout<< "The second number is: " << myNum[1] << endl;
}