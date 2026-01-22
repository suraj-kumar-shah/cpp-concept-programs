#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main() {
  int num;
  cout <<"Enter integer input : ";
  cin>> num;
  int ans = 0, rem;
  while(num != 0) {
    if(ans > INT_MAX / 10 || (ans == INT_MAX / 10 && ans > 8)){
      return 0;
    }
    if(ans < INT_MIN / 10 || (ans == INT_MIN / 10 && ans < -7)) {
      return 0;
    }

    rem = num % 10;
    num /= 10;
    ans = ans * 10 + rem;
  }
  cout << ans ;
  cout << endl;
  return 0;
}