#include<iostream>
using namespace std;
int main() {
  int n;
  cout << "enter array size : ";
  cin >> n;
  int*  arr = new int [n];

  cout << "Enter array elements : ";
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  cout << "print array : ";
  for(int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}