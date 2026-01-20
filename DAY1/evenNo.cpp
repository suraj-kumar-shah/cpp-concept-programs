#include<iostream>
using namespace std;
int main() {
  int num;
  cout <<"enter num value : ";
  cin>> num;
  if(num % 2 == 0) {
    cout <<"even";
  }
  else {
    cout << "odd";
  }
  cout << endl;
  return 0;
  
}