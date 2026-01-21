#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "enter n value :";
  cin>>n;
  if(n <= 1) {
    cout <<"Not Prime";
    return 0;
  }
  bool isPrime = true;
  for(int i = 2; i < n; i++) {
    if(n % i == 0) {
      isPrime = false;
    }
    
  }
  if(isPrime) {
    cout<< "Prime";
  } else {
    cout <<"Not prime";
  }
  cout << endl;
  return 0;

}