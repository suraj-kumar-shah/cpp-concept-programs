#include<iostream>
using namespace std;
void incr(int n) {
  n++;
};
int main() {
  int x;
  cout << "enter integer value : ";
  cin >> x;
  incr(x);
  cout << x << endl;
  return 0;
}