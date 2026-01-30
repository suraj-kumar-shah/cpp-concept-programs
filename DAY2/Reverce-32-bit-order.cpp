#include<iostream>
#include <climits>
using namespace std;
int main() {
  int num, ans = 0, rem;
  cout <<"enter num value : ";
  cin>> num;
  while( num != 0) {
    rem = num % 10;
    if(ans > INT_MAX / 10 || (ans == INT_MAX / 10 && rem > 7)) {
      cout << "ovrflow ";
      return 0;
    }
    if(ans < INT_MIN / 10 || (ans == INT_MIN / 10 && rem < -8)){
      cout << "Under overflow ";
      return 0;
    }
    ans = ans * 10 + rem;
    num = num / 10;
  }
  cout << "Reverse number is : " << ans;
  cout << endl;
  return 0;

}