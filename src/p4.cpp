#include <iostream>
using namespace std;

void printIndent(int depth) {
    if (depth <= 0) return;
    cout << "|--";
    printIndent(depth - 1);
}


int fib(int n, int depth) {

    if (depth > 0) printIndent(depth);
    cout << "SEARCH fib(" << n << ")\n";
    int result;
    if (n == 1 || n == 2) {
        result = 1;
    } else {
        int a = fib(n - 1, depth + 1);
        int b = fib(n - 2, depth + 1);
        result = a + b;
    }
    if (depth > 0) printIndent(depth);
    cout << "GET fib(" << n << ") = " << result << "\n";
    return result;
}

int main() {
    int n;
    cin >> n;
    cout << fib(n, 0) << endl;
    return 0;
}
