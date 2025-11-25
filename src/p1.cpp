#include <iostream>
using namespace std;

long long factorial(int n) {
    if (n == 1 || n == 0)
        return 1;
    return n * factorial(n - 1);
}

long long sum(int n) {
    if (n == 0)
        return 0;
    return n + sum(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << factorial(n) << endl;
    cout << sum(n) << endl;
    return 0;
}
