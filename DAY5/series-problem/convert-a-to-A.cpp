#include<iostream>
using namespace std;

char convert(char name) {
  char ans = name - 'a' + 'A';
  return ans;
}


int main() {
  char ch;
  cin >> ch;
  convert(ch);
  cout << ch;

  cout << endl;
  return 0;
}