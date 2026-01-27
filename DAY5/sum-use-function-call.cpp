#include<iostream>
using namespace std;
class Solution {
  public : 
    void fun() {
      cout << "sum and multiple of two parameter : " << endl;
    }
    int sum(int a, int b) {
      int ans = a + b;
      return ans ;
    }
    int Mul(int a, int b) {
      int mul = a * b;
      return mul;
    }
};
int main() {
  Solution s;
  s.fun();
  int a , b;
  cin >> a >> b;
  int sum = s.sum(a, b);
  cout << "sum of a & b is : " << sum;
  cout << endl;
  int x , y;
  cin >> x >> y;
  int mul =  s.Mul(x, y);
  cout << "multiple of a and b is : " << mul << endl;
  
  return 0;
}