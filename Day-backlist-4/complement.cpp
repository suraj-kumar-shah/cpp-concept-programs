#include<iostream>
using namespace std;
int main() {
  int n;
  cout << "enter interger input : ";
  cin >> n;
  int ans = 0, mul = 1, rem;
  if(n < 0) {
    return 0;
  
  }
  while(n != 0) {
    rem = n % 2;
    n = n / 2;
    // rem = rem ^ 1;
    if(rem == 0) {
      rem = 1;
    }
    else {
      rem = 0;
    }
    ans = rem * mul + ans;
    mul = mul * 2;
    
  }
  cout << ans ;
  cout << endl;
  return 0;
}