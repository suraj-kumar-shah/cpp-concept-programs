#include<iostream>
using namespace std;
int main() {
  int num;
  int ans = 0;
  int rem;
  int mul = 1;
  cout<< "enter num value : ";
  cin>> num;
  while(num > 0) {
    rem = num % 2;
    num /= 10;
    ans = rem * mul + ans;
    mul *= 2;
  }
  cout << ans;
  cout << endl;
  return 0;
}