

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

  //C++ Multi-Dimensional Arrays
  // Multi-Dimensional Arrays
  // A multi-dimensional array is an array of arrays
  // To declare a multi-dimensional array, define the variable type, specify the 
  // name of the array followed by square brackets which specify how many
  // elements the main array has, followed by another set of square brackets which 
  // indicates how many elements the sub-arrays has

  string letters[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};

cout << letters[1][2];











// We put "1" to indicate there is a ship.
bool ships[4][4] = {
  { 0, 1, 1, 0 },
  { 0, 0, 0, 0 },
  { 0, 0, 1, 0 },
  { 0, 0, 1, 0 }
};

// Keep track of how many hits the player has and how many turns they have played in these variables
int hits = 0;
int numberOfTurns = 0;

// Allow the player to keep going until they have hit all four ships
while (hits < 4) {
  int row, column;

  cout << "Selecting coordinates\n";

  // Ask the player for a row
  cout << "Choose a row number between 0 and 3: ";
  cin >> row;

  // Ask the player for a column
  cout << "Choose a column number between 0 and 3: ";
  cin >> column;

  // Check if a ship exists in those coordinates
  if (ships[row][column]) {
    // If the player hit a ship, remove it by setting the value to zero.
    ships[row][column] = 0;

    // Increase the hit counter
    hits++;

    // Tell the player that they have hit a ship and how many ships are left
    cout << "Hit! " << (4-hits) << " left.\n\n";
  } else {
    // Tell the player that they missed
    cout << "Miss\n\n";
  }

  // Count how many turns the player has taken
  numberOfTurns++;
}

cout << "Victory!\n";
cout << "You won in " << numberOfTurns << " turns";






}