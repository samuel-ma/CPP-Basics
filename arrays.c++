

#include <iostream>
#include <string>
using namespace std;

int main(){

  //String arrays
  string cars[3] = {"Volvo", "BMW", "Ford"};
  string names[4] = { "John", "Paul", "George", "Ringo"};
  int myNum[3] = {1, 2, 3};
  cars[0] = "Bugatti";

  cout << "The first car is: " << cars[0] << endl;
  cout<< "The second number is: " << myNum[1] << endl;

  //C++ Arrays and Loops
  //Loop Through and Array
  //You can loop through the array elements with the for loop
  //The following example outputs all elements in the cars array:

  string sport[4] = {"Volvo", "BMW", "Ford", "Mazda"};
  for (int i = 0; i < 4; i++)
  {
    cout << sport[i] << endl;
  }


  //Omit Array Size
  //You don't hae to specify the size of the array.
  //But if you don't, it will only be as big as the elements that are inserted into it:

  string cars2[] = {"Volvo", "BMW", "Ford"};
  string cars3[5] = {"Volvo", "BMW", "Ford"};

  //Omit Elements on Declaration
  //It is also possilbe to declare an array without specifying the elements on declaration and add them later

  string sports[5];
  sports[0] = "Basketball";
  sports[1] = "Football";
  sports[2] = "Netball";
  sports[3] = "F1Racing";
  sports[4] = "Swimming";
  for(int i=0; i < 5; i++){
    cout << sports[i] << endl;
  }

  //C++ Array Size
  //Get the size of an array
  //To get the size of an array, you can use the sizeOf() operator:

  int myFavNumber[5] = {1, 2, 3, 4, 5};
  cout << sizeof(myFavNumber) / sizeof(int)<< endl;

}