#include<iostream>
using namespace std;
int main() {
  int n;
  int ans = INT_MAX;
  cin >> n;
  vector<int> arr(n);
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }


    for(int i = 0; i < n; i++) {
      if(arr[i] < ans) {
        ans = arr[i];
      }
    }
    cout << ans << endl;

   
}