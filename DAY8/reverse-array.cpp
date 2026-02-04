#include<iostream>
using namespace std;
int main() {
  int arr[6] = {4, 5, 2, 7, 88, 33};
  int temp[5];
  int i = 5;
  int j = 0;
  while(i >= 0) {
    temp[j] = arr[i];
    j++;
    i--;
  }
  for(int k = 0; k < 6; k++) {
    cout << temp[k] << " ";
  }
  cout << endl;
  return 0;
}