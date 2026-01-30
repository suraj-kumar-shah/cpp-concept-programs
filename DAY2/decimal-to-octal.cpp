#include<iostream>
using namespace std;
int main() {
  int num, ans = 0, rem, mul = 1;
  cout << "Enter num value : ";
  cin >> num;
  while(num > 0) {
    rem = num % 8;
    num /= 8;
    ans = rem * mul + ans ;
    mul = mul * 10;
  }
  cout << ans;
  cout << endl;
  return 0;
}