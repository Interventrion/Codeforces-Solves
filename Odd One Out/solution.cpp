#include <algorithm>
#include <fstream>
#include <iostream>

using namespace std;

int main() {
    long long n, a, b, c; cin >> n;

    for (int i = 0; i < n + 1; i++) {
        cin >> a >> b >> c;
        if (a == b) {
            cout << c << endl;
        } else if (b == c) {
            cout << a << endl;
        } else {
            cout << b << endl;
        }
    }
}
