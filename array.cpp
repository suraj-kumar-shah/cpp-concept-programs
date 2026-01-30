#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main() {
  int arr[5] = {1, 3, 4, 5, 6};
  for(int i = 0; i < 5 ; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  char ch[5] = {'a', 'b', 'c', 'd', 'e'};
  for(int i = 0; i < 5; i++) {
    cout << ch[i] << " ";
  }
  cout << endl;
 
  string str[5] = {"suraj", "vivek", "raushan", "suyash", "shiv"};
  for(int i = 0; i < 5; i++) {
    cout << str[i] << " ";
  }
  cout << endl;

  float f[5] = {1.4, 6.3, 8.3, 6.0, 9.5};
  for(int i = 0; i < 5; i++) {
    cout << f[i] << " ";
  }
  cout << endl;

  double db[5] = {4.7777, 8.9394854, 3.0394848, 2.9384848484, 2.83848484};
  cout << fixed << setprecision(2);
  for(int i = 0; i < 5; i++) {

    cout << db[i] << " ";
  }
  cout << endl;
  return 0;

}