#include<bits/stdc++.h>
using namespace std;
bool armstrongNumber(int n) {
    int original = n;
    int sum = 0;
    while(n > 0) {
        int lastdigit = n % 10;
        sum = sum + (lastdigit * lastdigit * lastdigit);
        n = n / 10;
    }
    if (sum == original) {
        return true;
    } else {
        return false;
    }
}
int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    if (armstrongNumber(n)) {
        cout << "true";
    } else {
        cout << "false";
    }
    return 0;
}