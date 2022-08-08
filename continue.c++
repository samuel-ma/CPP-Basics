

#include <iostream>
#include <string>
using namespace std;

int main(){

  for (int i = 0; i < 10; i++){
    if (i == 4){
      continue;
    }
    cout << i << endl;
  }

  int k = 0;
  while(k < 10){
    cout << k << endl;
    k++;
    if (k == 4){
      continue;
    }
  }
}