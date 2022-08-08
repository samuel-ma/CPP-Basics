

#include <iostream>
#include <string>
using namespace std;

int main(){

  int day = 3;
  switch(day){
    case 1:
    cout << "Monday" << endl;
    break;

    case 2:
    cout << "Tuesday" << endl;
    break;

    case 3:
    cout << "Wednesday" << endl;
    break;

    case 4:
    cout << "Thursday" << endl;
    break;

    case 5:
    cout << "Friday" << endl;
    break;

    case 6:
    cout << "Saturday" << endl;
    break;

    case 7:
    cout << "Sunday" << endl;
    break;

  }

  // using the default statement in a switch
  switch(day){
    case 8:
    cout << "Independence Day" << endl;
    break;

    case 9:
    cout << "Labor Day" << endl;
    break;

    default:
    cout << "No holiday" << endl;
    break;
  }
}