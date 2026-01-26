#include<iostream>
using namespace std;
int main() {
  int num, ans = 0, rem;
  cout << "Enter integer input : ";
  cin >> num;
  int x = num;
  if(num < 0) {
    cout << "Not Pllaindrome";
    return 0;
  }

  while(num != 0) {
    rem = num % 10;
   
    ans = ans * 10 + rem;
     num /= 10;
  }
  if(ans  == x) {
    cout << "Plllaindrome";
  }
  else {
    cout << "Not Pllaindrome";
  }
  cout << endl;
  return 0;
}