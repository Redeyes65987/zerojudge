#include <bits/stdc++.h>
using namespace std;
int multiply_digits(int n) {
    if (n == 0) {
        return 0;
    }
    int product = 1;
    while (n > 0) {
        product *= n % 10;
        n /= 10;
    }
    return product;
}
int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int n;
        cin >> n;
        int result = multiply_digits(n);
        cout << result << "\n";
    }
    return 0;
}
