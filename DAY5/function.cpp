#include<iostream>
using namespace std;
class Solution {
  public : 
    bool Prime(int n) {
      if(n < 2) {
        return false;
      }
      for(int i = 2; i < n; i++) {
        if(n % i == 0) {
          return false;
        }
      }
      return true;
    }
    int factorial(int x) {
      int ans = 1;
      for(int i = 1; i <= x; i++) {
        ans = ans * i;

      }
      return ans;
    }
};
int main() {
  Solution s;
  int a, b;
  cout<< "Enter a value : ";
  cin >> a;
  cout << "Enter b value : ";
  cin >> b;
  cout << "Prime or Not : " << s.Prime(a);
  cout << endl;
  cout << "factorial number : " << s.factorial(b);
  cout << endl;
  cout << "B brime or not : " << s.Prime(b) << endl;
  cout << "a - b prime or not : " << s.Prime(a - b) << endl;
  cout << "a - b factorial : " << s.factorial(a -b ) << endl;
  return 0;
}