#include<iostream>
using namespace std;
void incr(int & n) {
  n++;
};
int main() {
  int x;
  cout << "enter x integer input : ";
  cin >> x;
  incr(x);
  cout << x << endl;
  return 0;
}