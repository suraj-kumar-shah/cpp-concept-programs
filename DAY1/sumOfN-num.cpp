#include<iostream>
using namespace std;
int main() {
  int n;
  int sum = 0;
  cout << "enter number of n: ";
  cin >> n;
  for(int i = 1; i <= n; i++) {
    sum += i;
  }
  cout << "sum of N no is : " << sum ;
  cout << endl;
  return 0;

  
}