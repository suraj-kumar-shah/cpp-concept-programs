#include<iostream>
using namespace std;
int main() {
  int num;
  cout << "Enter year inoput : ";
  cin>> num;
  if(num % 400 == 0) {
    cout << "Leap Year";
    return 0;
  }
  else if(num % 4 == 0 &&  num % 100 != 0) {
    cout << "Leap year ";
  }
  
  else {
    cout << "Not Leap year";
  }
  cout << endl;
  return 0;
}