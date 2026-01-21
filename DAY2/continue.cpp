#include<iostream>
using namespace std;
int main() {
  int n;
  cout << "enter n value : ";
  cin>> n;
  for(int i = 1; i <= n; i++) {
    if(i == 4) {
      continue;
    }
    cout << i << " ";
  }
  cout << endl;
  return 0;
}