#include<iostream>
using namespace std;
int main() {
  int zero[5] = {0};
  int arr[5] = {1, 2, 3};
  int name[5] = {5, 6, 7, 8, 9};

  for(int i = 0; i < 5; i++) {
    cout << zero[i] << " ";
  }
  cout << endl;
  for(int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  for(int i = 0; i < 5; i++) {
    cout << name[i] << " ";
  }
  cout << endl;
  return 0;
}