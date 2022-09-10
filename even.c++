#include <iostream>
#include <string>
using namespace std;

int main(){
   int x, y, n;
    cout << "Enter two numbers: " << endl;
    cin >> x >> y;
    n = x + y;

    if (n%2 == 0){
        cout << "even" << endl;
    } else {
        cout << "odd" << endl;
    }
}
