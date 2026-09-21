#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    do {
        int digit = n % 10;
        n /= 10;

        string s;
        if (digit >= 5) s += "-O|";
        else s += "O-|";

        int d = digit % 5;
        s += string(d, 'O');
        s += '-';
        s += string(4 - d, 'O');

        cout << s << "\n";
    } while (n > 0);

    return 0;
}
