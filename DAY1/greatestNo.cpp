#include<iostream>
using namespace std;
int main() {
  int x , y;
  cout << "valu of x : ";
  cin>> x;
  cout << "value of y: ";
  cin>> y;
  if (x > y) {
    cout << x << " is bigger than " << y;
  }
  else if (x < y) {
    cout << x << " is smaller than " << y;
  }
  else {
    cout <<  x << " and " << y << " equal";
  }
  cout << endl;
  return 0;
}