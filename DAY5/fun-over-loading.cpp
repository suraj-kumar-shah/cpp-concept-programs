#include<iostream>
using namespace std;
void Swap(int &a, int &b) {
  int c = a;
  a = b;
  b = c;
}
void Swap(float &a, float &b) { // Function overloading ;
  float c = a;
  a = b;
  b = c;
};
int main() {
  int a, b;
  cin >> a >> b;
  Swap(a, b);
  cout << a << " " << b << endl;
  float x = 5.9;
  float y = 6.8;
  Swap(x, y);
  cout << x << " " << y ;
  cout << endl;
  return 0;

}
