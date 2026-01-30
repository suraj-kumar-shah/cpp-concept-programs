#include<iostream>
#include<cmath>
using namespace std;
int countDigit(int num) {
  int count = 0;
  int rem;
  while(num) {
    count++;
    num /= 10;
  }
  return count;

}

  bool Armstrong(int num, int digit) {
    int ans = 0, rem;
    int temp = num;
    while(num) {
      rem = num % 10;
      num = num / 10;
      ans = ans + (int)pow(rem, count);
      
    }
    if(ans == temp) {
      return 1;
    }
    else {
      return 0;
    }
  };

int main() {
  int num;
  cin >> num;
  int digit = countDigit(num);
  
  cout << Armstrong(num, digit);
  cout << endl;
  return 0;
}