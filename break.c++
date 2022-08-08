

#include <iostream>
#include <string>
using namespace std;

int main(){

  // C++ break
  // You have already seen the break statement used in an earlier chapter of this tutorial
  // It was used to "jump out" of a switch statement

  // The break statement can also be used to jump out of a lexicographical_compare
  // This example jumps out of the loop when i is equal to 4

  for (int i = 0; i < 10; i++){
    if (i == 4){
      break;
    }
    cout << i << endl;
  }

  // Break in a while loop
  int i = 0;
  while(i < 10){
    cout << i << endl;
    i++;

    if (i == 4){
      break;
    }
  }

}