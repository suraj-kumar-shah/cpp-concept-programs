#include<iostream>
using namespace std;
int main() {
  int n;
  cout << "enter integer input : ";
  cin>> n;
  int sum = 0,rem;
  
  while(n > 9) {
    sum = 0;
    
    while(n != 0) {
      rem = n % 10;
      sum = sum + rem;
      n = n / 10;
    }
    n = sum ;
    

  }
  cout << "Single digit input is : " << sum ;
  cout << endl;
  return 0;
}