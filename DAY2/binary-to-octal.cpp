#include<iostream>
using namespace std;
int main() {
  int num, dec = 0;
  int rem, mul = 1;
  cout << "enter num value : ";
  cin>> num;
  while(num > 0) {
    rem = num % 2;
    num = num / 10;
    dec = rem * mul + dec;
    mul = mul * 2;
  }
  cout << "Binary to decimal conversion : " << dec;
  cout << endl;
  int oct_rem, oct_ans = 0, oct_mul = 1;
  while(dec > 0) {
    oct_rem = dec % 8;
    dec = dec / 8;
    oct_ans = oct_rem * oct_mul + oct_ans;
    oct_mul = oct_mul * 10;

  }
  cout << "decimal to octoal conversion is : " << oct_ans;
  cout << endl;
  return 0;

}