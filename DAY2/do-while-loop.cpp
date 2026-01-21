#include<iostream>
using namespace std;
int main() {
  int n;
  cout << "enter n value :";
  cin >> n;
  int i = 1;
  do {
    cout << i << " Hello" << " ";
    i++;
  } while(i <= n);
  cout << endl;
  return 0;

}