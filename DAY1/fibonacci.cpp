#include<iostream>
using namespace std;
int main() {
  int n;
  cout << "enter n value : ";
  cin >> n;
  int t1 = 0;
  int t2 = 1;
  int next;
  for(int i = 1; i <=n; i++) {
    cout << t1 << " ";
    next = t1 + t2;
    t1 = t2;
    t2 = next;

  }
  cout << endl;
  return 0;

}