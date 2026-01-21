#include<iostream>
using namespace std;
int main() {
  int num, reverse = 0, rem;
  cout << "enter number : ";
  cin>> num;
  while(num > 0) {
    rem = num % 10;
    reverse = reverse * 10 + rem;
    num = num / 10;

  }
  cout << "reverse order is : " << reverse ;
  cout << endl;
  return 0;
}