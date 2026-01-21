// Print n = 5 , pow = 4, ans = 625

#include<iostream>
using namespace std;
int main() {
  int n, pow, ans = 1;
  cout<< "enter number : " ;
  cin >> n;
  cout << "enter power number : ";
  cin >> pow;
  for(int i = 1; i <= pow; i ++) {
    ans *= n;
  }
  cout << "final answer is : " << ans;
  cout<< endl;
  return 0;
}