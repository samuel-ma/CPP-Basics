#include <iostream>
#include <string>
#include <bits/stdc++.h>

void reverseStr(string & str){
  int n = str.length();
  
  //swap character starting from two corners
  for (int i=0, i<n/2, i++){
    swap(str[i], str[n - i - 1]);
  }
}


int main(){
  string str;
  cout << "Enter some text: " << endl;
  getline(cin, str);
  reverseStr(str);
  cout << str;
  return 0;
}
