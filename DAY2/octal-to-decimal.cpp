#include<iostream>
using namespace std;
int main() {
  int num, ans = 0, rem, mul = 1;
  cout << "Enter Num value : ";
  cin >> num;
  while(num > 0) {
    rem = num % 10;
    num /= 10;
    ans = rem * mul + ans ;
    mul *= 8;
  }
  cout << ans;
  cout << endl;
  return 0;
}