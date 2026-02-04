#include<iostream>
using namespace std;
int main() {
  int n;
  cout << "enter array size : " ;
  cin >> n;
 cout << "enter array elements : ";
  vector<int> arr(n);
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int k;
  cout << "enter find index : ";
  cin >> k;
  int index = -1;

  for(int i = 0; i < n; i++) {
    if(arr[i] == k) {
      index = i;
      break;
    }
  }
  if(index) {
    cout << index << endl;
  }
  else {
    cout << "not here";
  }
  return 0;
}