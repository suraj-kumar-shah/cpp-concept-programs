#include<iostream>
using namespace std;
int main() {
  int n;
  cout << "enter array size : ";
  cin >> n;
  vector<int> arr(n);
  cout << "enter array elemet : ";
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int i = n - 1;
  int j = 0;
  vector<int> temp(n);
  while(i >= 0) {
    temp[j] = arr[i];
    j++;
    i--;
  }
  for(int k = 0; k < n; k++) {
    cout << temp[k] << " ";
  }
  cout << endl;
  return 0;
}