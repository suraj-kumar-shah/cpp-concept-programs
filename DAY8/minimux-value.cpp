#include<iostream>
#include<math.h>
using namespace std;
int main() {
  int arr[5] = {4, 7, 10, 3, 10};
  int ans = INT_MAX;
  for(int i = 0; i < 5; i++) {
    if(arr[i] < ans ) {
      ans = arr[i];
    }
  }
  cout << ans << endl;
}