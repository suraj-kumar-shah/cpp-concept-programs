#include<iostream>
using namespace std;
int main() {
  int a, b;
  cin >> a >> b;
  swap(a, b);
  cout << a << " " << b << endl;
  float x = 5.6;
  float y = 7.2;
  swap(x, y);
  cout << x << " " << y;
  cout << endl;
  return 0;
}