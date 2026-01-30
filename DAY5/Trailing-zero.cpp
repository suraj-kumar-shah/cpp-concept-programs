#include<iostream>
using namespace std;

int findZero(int num) {
    int count = 0;

    while(num > 0) {
        num = num / 5;   // divide by 5
        count += num;
    }

    return count;
}

int main() {
    int n;
    cout << "enter integer input : ";
    cin >> n;

    cout << findZero(n) << endl;
    return 0;
}