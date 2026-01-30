#include<iostream>
using namespace std;
int main() {
  int num , ans = 0, rem, mul = 1;
  cout << "Enter value of num : ";
  cin >> num;
  while(num > 0) {
    rem = num % 2;
    num /= 2;
    ans = rem * mul + ans;
    mul *= 10;
  }
  cout <<"decumal number is : "<< ans;
  cout << endl;
  return 0;
}