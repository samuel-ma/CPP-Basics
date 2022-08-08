

#include <iostream>
#include <string>
using namespace std;

int main(){

  // C++ Loops
  // Loops can execute a block of code as long as a specified condition is reached
  // Loops are handy because they save time, reduce errors, and they make code more readable

  
  // C++ While Loops
  int i = 0;
  while(i < 10){
    cout << i << endl;
    i++;
  }

  // C++ Do While Loops
  // The do while loop is a variant of the while loop.
  // This loop will execute the code block once,
  // Before checking if the condition is true, then it will repeat the loop as long as the condition is true
  int k = 0;
  do {
    cout << k << endl;
    k++;
  } 
  while (k < 10);


  // C++ For Loops
  // When you know exactly how many times you want to loop through a block of code, use the for loop instead of a while loop.
  for (int m=0; m<10; m++){
    cout << i << endl;
  }

  }